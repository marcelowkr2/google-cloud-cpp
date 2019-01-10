// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "google/cloud/storage/internal/http_response.h"
#include <gmock/gmock.h>

namespace google {
namespace cloud {
namespace storage {
inline namespace STORAGE_CLIENT_NS {
namespace internal {
namespace {
using ::testing::HasSubstr;
TEST(HttpResponseTest, OStream) {
  HttpResponse response{
      404, "some-payload", {{"header1", "value1"}, {"header2", "value2"}}};

  std::ostringstream os;
  os << response;
  auto actual = os.str();
  EXPECT_THAT(actual, HasSubstr("404"));
  EXPECT_THAT(actual, HasSubstr("some-payload"));
  EXPECT_THAT(actual, HasSubstr("header1: value1"));
  EXPECT_THAT(actual, HasSubstr("header2: value2"));
}

TEST(HttpResponseTest, AsStatus) {
  EXPECT_EQ(StatusCode::kUnknown,
            AsStatus(HttpResponse{-42, "weird"}).status_code());
  EXPECT_EQ(StatusCode::kUnknown,
            AsStatus(HttpResponse{99, "still weird"}).status_code());
  EXPECT_EQ(StatusCode::kOk,
            AsStatus(HttpResponse{100, "Continue"}).status_code());
  EXPECT_EQ(StatusCode::kOk,
            AsStatus(HttpResponse{200, "success"}).status_code());
  EXPECT_EQ(StatusCode::kOk,
            AsStatus(HttpResponse{299, "success"}).status_code());
  EXPECT_EQ(StatusCode::kUnknown,
            AsStatus(HttpResponse{300, "libcurl should handle this"}).status_code());
  EXPECT_EQ(StatusCode::kOk,
            AsStatus(HttpResponse{308, "pending"}).status_code());
  EXPECT_EQ(StatusCode::kInvalidArgument,
            AsStatus(HttpResponse{400, "invalid something"}).status_code());
  EXPECT_EQ(StatusCode::kUnauthenticated,
            AsStatus(HttpResponse{401, "unauthenticated"}).status_code());
  EXPECT_EQ(StatusCode::kPermissionDenied,
            AsStatus(HttpResponse{403, "forbidden"}).status_code());
  EXPECT_EQ(StatusCode::kNotFound,
            AsStatus(HttpResponse{404, "not found"}).status_code());
  EXPECT_EQ(StatusCode::kPermissionDenied,
            AsStatus(HttpResponse{405, "method not allowed"}).status_code());
  EXPECT_EQ(StatusCode::kAborted,
            AsStatus(HttpResponse{409, "conflict"}).status_code());
  EXPECT_EQ(StatusCode::kNotFound,
            AsStatus(HttpResponse{410, "gone"}).status_code());
  EXPECT_EQ(StatusCode::kInvalidArgument,
            AsStatus(HttpResponse{411, "length required"}).status_code());
  EXPECT_EQ(StatusCode::kFailedPrecondition,
            AsStatus(HttpResponse{412, "precondition failed"}).status_code());
  EXPECT_EQ(StatusCode::kOutOfRange,
            AsStatus(HttpResponse{413, "payload too large"}).status_code());
  EXPECT_EQ(StatusCode::kOutOfRange,
            AsStatus(HttpResponse{416, "request range"}).status_code());
  EXPECT_EQ(StatusCode::kUnavailable,
            AsStatus(HttpResponse{429, "too many requests"}).status_code());
  EXPECT_EQ(StatusCode::kInvalidArgument,
            AsStatus(HttpResponse{499, "some 4XX error"}).status_code());
  EXPECT_EQ(StatusCode::kInternal,
            AsStatus(HttpResponse{500, "internal server error"}).status_code());
  EXPECT_EQ(StatusCode::kInternal,
            AsStatus(HttpResponse{502, "bad gateway"}).status_code());
  EXPECT_EQ(StatusCode::kUnavailable,
            AsStatus(HttpResponse{503, "service unavailable"}).status_code());
  EXPECT_EQ(StatusCode::kInternal,
            AsStatus(HttpResponse{599, "some 5XX error"}).status_code());
  EXPECT_EQ(StatusCode::kUnknown,
            AsStatus(HttpResponse{600, "bad"}).status_code());
}
}  // namespace
}  // namespace internal
}  // namespace STORAGE_CLIENT_NS
}  // namespace storage
}  // namespace cloud
}  // namespace google
