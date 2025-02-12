// Copyright 2023 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "docfx/doxygen2markdown.h"
#include <iostream>
#include <sstream>
#include <string_view>

namespace {

[[noreturn]] void UnknownChildType(std::string_view where,
                                   pugi::xml_node const& child) {
  std::ostringstream os;
  os << "Unknown child in " << where << "(): node=";
  child.print(os, /*indent=*/"", /*flags=*/pugi::format_raw);
  throw std::runtime_error(std::move(os).str());
}

}  // namespace

bool AppendIfPlainText(std::ostream& os, pugi::xml_node const& node) {
  if (!std::string_view{node.name()}.empty() || !node.attributes().empty()) {
    return false;
  }
  os << node.value();
  return true;
}

bool AppendIfComputerOutput(std::ostream& os, pugi::xml_node const& node) {
  if (std::string_view{node.name()} != "computeroutput") return false;
  os << '`' << node.child_value() << '`';
  return true;
}

bool AppendIfParagraph(std::ostream& os, pugi::xml_node const& node) {
  if (std::string_view{node.name()} != "para") return false;
  for (auto const& child : node) {
    if (AppendIfPlainText(os, child)) continue;
    if (AppendIfComputerOutput(os, child)) continue;
    UnknownChildType(__func__, child);
  }
  os << "\n";
  return true;
}
