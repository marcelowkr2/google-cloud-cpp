// Copyright 2022 Google LLC
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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/dialogflow/cx/v3/test_case.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_TEST_CASES_CONNECTION_IDEMPOTENCY_POLICY_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_TEST_CASES_CONNECTION_IDEMPOTENCY_POLICY_H

#include "google/cloud/idempotency.h"
#include "google/cloud/internal/retry_policy.h"
#include "google/cloud/version.h"
#include <google/cloud/dialogflow/cx/v3/test_case.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace dialogflow_cx {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TestCasesConnectionIdempotencyPolicy {
 public:
  virtual ~TestCasesConnectionIdempotencyPolicy();

  /// Create a new copy of this object.
  virtual std::unique_ptr<TestCasesConnectionIdempotencyPolicy> clone() const;

  virtual google::cloud::Idempotency ListTestCases(
      google::cloud::dialogflow::cx::v3::ListTestCasesRequest request);

  virtual google::cloud::Idempotency BatchDeleteTestCases(
      google::cloud::dialogflow::cx::v3::BatchDeleteTestCasesRequest const&
          request);

  virtual google::cloud::Idempotency GetTestCase(
      google::cloud::dialogflow::cx::v3::GetTestCaseRequest const& request);

  virtual google::cloud::Idempotency CreateTestCase(
      google::cloud::dialogflow::cx::v3::CreateTestCaseRequest const& request);

  virtual google::cloud::Idempotency UpdateTestCase(
      google::cloud::dialogflow::cx::v3::UpdateTestCaseRequest const& request);

  virtual google::cloud::Idempotency RunTestCase(
      google::cloud::dialogflow::cx::v3::RunTestCaseRequest const& request);

  virtual google::cloud::Idempotency BatchRunTestCases(
      google::cloud::dialogflow::cx::v3::BatchRunTestCasesRequest const&
          request);

  virtual google::cloud::Idempotency CalculateCoverage(
      google::cloud::dialogflow::cx::v3::CalculateCoverageRequest const&
          request);

  virtual google::cloud::Idempotency ImportTestCases(
      google::cloud::dialogflow::cx::v3::ImportTestCasesRequest const& request);

  virtual google::cloud::Idempotency ExportTestCases(
      google::cloud::dialogflow::cx::v3::ExportTestCasesRequest const& request);

  virtual google::cloud::Idempotency ListTestCaseResults(
      google::cloud::dialogflow::cx::v3::ListTestCaseResultsRequest request);

  virtual google::cloud::Idempotency GetTestCaseResult(
      google::cloud::dialogflow::cx::v3::GetTestCaseResultRequest const&
          request);
};

std::unique_ptr<TestCasesConnectionIdempotencyPolicy>
MakeDefaultTestCasesConnectionIdempotencyPolicy();

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dialogflow_cx
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DIALOGFLOW_CX_TEST_CASES_CONNECTION_IDEMPOTENCY_POLICY_H
