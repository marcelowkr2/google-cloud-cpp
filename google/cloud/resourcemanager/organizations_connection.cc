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
// source: google/cloud/resourcemanager/v3/organizations.proto

#include "google/cloud/resourcemanager/organizations_connection.h"
#include "google/cloud/resourcemanager/internal/organizations_option_defaults.h"
#include "google/cloud/resourcemanager/internal/organizations_stub_factory.h"
#include "google/cloud/resourcemanager/organizations_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include "google/cloud/internal/retry_loop.h"
#include <memory>

namespace google {
namespace cloud {
namespace resourcemanager {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

OrganizationsConnection::~OrganizationsConnection() = default;

StatusOr<google::cloud::resourcemanager::v3::Organization>
OrganizationsConnection::GetOrganization(
    google::cloud::resourcemanager::v3::GetOrganizationRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::resourcemanager::v3::Organization>
OrganizationsConnection::SearchOrganizations(
    google::cloud::resourcemanager::v3::SearchOrganizationsRequest request) {
  return google::cloud::internal::MakePaginationRange<
      StreamRange<google::cloud::resourcemanager::v3::Organization>>(
      std::move(request),
      [](google::cloud::resourcemanager::v3::
             SearchOrganizationsRequest const&) {
        return StatusOr<
            google::cloud::resourcemanager::v3::SearchOrganizationsResponse>{};
      },
      [](google::cloud::resourcemanager::v3::
             SearchOrganizationsResponse const&) {
        return std::vector<google::cloud::resourcemanager::v3::Organization>();
      });
}

StatusOr<google::iam::v1::Policy> OrganizationsConnection::GetIamPolicy(
    google::iam::v1::GetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::Policy> OrganizationsConnection::SetIamPolicy(
    google::iam::v1::SetIamPolicyRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::iam::v1::TestIamPermissionsResponse>
OrganizationsConnection::TestIamPermissions(
    google::iam::v1::TestIamPermissionsRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

namespace {
class OrganizationsConnectionImpl : public OrganizationsConnection {
 public:
  OrganizationsConnectionImpl(
      std::unique_ptr<google::cloud::BackgroundThreads> background,
      std::shared_ptr<resourcemanager_internal::OrganizationsStub> stub,
      Options const& options)
      : background_(std::move(background)),
        stub_(std::move(stub)),
        retry_policy_prototype_(
            options.get<OrganizationsRetryPolicyOption>()->clone()),
        backoff_policy_prototype_(
            options.get<OrganizationsBackoffPolicyOption>()->clone()),
        idempotency_policy_(
            options.get<OrganizationsConnectionIdempotencyPolicyOption>()
                ->clone()) {}

  ~OrganizationsConnectionImpl() override = default;

  StatusOr<google::cloud::resourcemanager::v3::Organization> GetOrganization(
      google::cloud::resourcemanager::v3::GetOrganizationRequest const& request)
      override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetOrganization(request),
        [this](grpc::ClientContext& context,
               google::cloud::resourcemanager::v3::GetOrganizationRequest const&
                   request) {
          return stub_->GetOrganization(context, request);
        },
        request, __func__);
  }

  StreamRange<google::cloud::resourcemanager::v3::Organization>
  SearchOrganizations(
      google::cloud::resourcemanager::v3::SearchOrganizationsRequest request)
      override {
    request.clear_page_token();
    auto stub = stub_;
    auto retry = std::shared_ptr<OrganizationsRetryPolicy const>(
        retry_policy_prototype_->clone());
    auto backoff = std::shared_ptr<BackoffPolicy const>(
        backoff_policy_prototype_->clone());
    auto idempotency = idempotency_policy_->SearchOrganizations(request);
    char const* function_name = __func__;
    return google::cloud::internal::MakePaginationRange<
        StreamRange<google::cloud::resourcemanager::v3::Organization>>(
        std::move(request),
        [stub, retry, backoff, idempotency,
         function_name](google::cloud::resourcemanager::v3::
                            SearchOrganizationsRequest const& r) {
          return google::cloud::internal::RetryLoop(
              retry->clone(), backoff->clone(), idempotency,
              [stub](grpc::ClientContext& context,
                     google::cloud::resourcemanager::v3::
                         SearchOrganizationsRequest const& request) {
                return stub->SearchOrganizations(context, request);
              },
              r, function_name);
        },
        [](google::cloud::resourcemanager::v3::SearchOrganizationsResponse r) {
          std::vector<google::cloud::resourcemanager::v3::Organization> result(
              r.organizations().size());
          auto& messages = *r.mutable_organizations();
          std::move(messages.begin(), messages.end(), result.begin());
          return result;
        });
  }

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->GetIamPolicy(request),
        [this](grpc::ClientContext& context,
               google::iam::v1::GetIamPolicyRequest const& request) {
          return stub_->GetIamPolicy(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->SetIamPolicy(request),
        [this](grpc::ClientContext& context,
               google::iam::v1::SetIamPolicyRequest const& request) {
          return stub_->SetIamPolicy(context, request);
        },
        request, __func__);
  }

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request) override {
    return google::cloud::internal::RetryLoop(
        retry_policy_prototype_->clone(), backoff_policy_prototype_->clone(),
        idempotency_policy_->TestIamPermissions(request),
        [this](grpc::ClientContext& context,
               google::iam::v1::TestIamPermissionsRequest const& request) {
          return stub_->TestIamPermissions(context, request);
        },
        request, __func__);
  }

 private:
  std::unique_ptr<google::cloud::BackgroundThreads> background_;
  std::shared_ptr<resourcemanager_internal::OrganizationsStub> stub_;
  std::unique_ptr<OrganizationsRetryPolicy const> retry_policy_prototype_;
  std::unique_ptr<BackoffPolicy const> backoff_policy_prototype_;
  std::unique_ptr<OrganizationsConnectionIdempotencyPolicy> idempotency_policy_;
};
}  // namespace

std::shared_ptr<OrganizationsConnection> MakeOrganizationsConnection(
    Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 OrganizationsPolicyOptionList>(options,
                                                                __func__);
  options =
      resourcemanager_internal::OrganizationsDefaultOptions(std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = resourcemanager_internal::CreateDefaultOrganizationsStub(
      background->cq(), options);
  return std::make_shared<OrganizationsConnectionImpl>(
      std::move(background), std::move(stub), options);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager
}  // namespace cloud
}  // namespace google

namespace google {
namespace cloud {
namespace resourcemanager_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

std::shared_ptr<resourcemanager::OrganizationsConnection>
MakeOrganizationsConnection(std::shared_ptr<OrganizationsStub> stub,
                            Options options) {
  options = OrganizationsDefaultOptions(std::move(options));
  return std::make_shared<resourcemanager::OrganizationsConnectionImpl>(
      internal::MakeBackgroundThreadsFactory(options)(), std::move(stub),
      std::move(options));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace resourcemanager_internal
}  // namespace cloud
}  // namespace google
