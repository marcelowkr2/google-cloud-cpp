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

#ifndef GOOGLE_CLOUD_CPP_DOCFX_DOXYGEN2MARKDOWN_H
#define GOOGLE_CLOUD_CPP_DOCFX_DOXYGEN2MARKDOWN_H

#include <pugixml.hpp>
#include <iosfwd>

bool AppendIfPlainText(std::ostream& os, pugi::xml_node const& node);
bool AppendIfComputerOutput(std::ostream& os, pugi::xml_node const& node);
bool AppendIfParagraph(std::ostream& os, pugi::xml_node const& node);

#endif  // GOOGLE_CLOUD_CPP_DOCFX_DOXYGEN2MARKDOWN_H
