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

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/gkemulticloud/v1/azure_service.proto

#include "google/cloud/gkemulticloud/v1/azure_clusters_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace gkemulticloud_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

AzureClustersConnectionIdempotencyPolicy::
    ~AzureClustersConnectionIdempotencyPolicy() = default;

std::unique_ptr<AzureClustersConnectionIdempotencyPolicy>
AzureClustersConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<AzureClustersConnectionIdempotencyPolicy>(*this);
}

Idempotency AzureClustersConnectionIdempotencyPolicy::CreateAzureClient(
    google::cloud::gkemulticloud::v1::CreateAzureClientRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AzureClustersConnectionIdempotencyPolicy::GetAzureClient(
    google::cloud::gkemulticloud::v1::GetAzureClientRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AzureClustersConnectionIdempotencyPolicy::ListAzureClients(
    google::cloud::gkemulticloud::v1::ListAzureClientsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AzureClustersConnectionIdempotencyPolicy::DeleteAzureClient(
    google::cloud::gkemulticloud::v1::DeleteAzureClientRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AzureClustersConnectionIdempotencyPolicy::CreateAzureCluster(
    google::cloud::gkemulticloud::v1::CreateAzureClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AzureClustersConnectionIdempotencyPolicy::UpdateAzureCluster(
    google::cloud::gkemulticloud::v1::UpdateAzureClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AzureClustersConnectionIdempotencyPolicy::GetAzureCluster(
    google::cloud::gkemulticloud::v1::GetAzureClusterRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AzureClustersConnectionIdempotencyPolicy::ListAzureClusters(
    google::cloud::gkemulticloud::v1::ListAzureClustersRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AzureClustersConnectionIdempotencyPolicy::DeleteAzureCluster(
    google::cloud::gkemulticloud::v1::DeleteAzureClusterRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AzureClustersConnectionIdempotencyPolicy::GenerateAzureAccessToken(
    google::cloud::gkemulticloud::v1::GenerateAzureAccessTokenRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AzureClustersConnectionIdempotencyPolicy::CreateAzureNodePool(
    google::cloud::gkemulticloud::v1::CreateAzureNodePoolRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AzureClustersConnectionIdempotencyPolicy::UpdateAzureNodePool(
    google::cloud::gkemulticloud::v1::UpdateAzureNodePoolRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AzureClustersConnectionIdempotencyPolicy::GetAzureNodePool(
    google::cloud::gkemulticloud::v1::GetAzureNodePoolRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency AzureClustersConnectionIdempotencyPolicy::ListAzureNodePools(
    google::cloud::gkemulticloud::v1::ListAzureNodePoolsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency AzureClustersConnectionIdempotencyPolicy::DeleteAzureNodePool(
    google::cloud::gkemulticloud::v1::DeleteAzureNodePoolRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency AzureClustersConnectionIdempotencyPolicy::GetAzureServerConfig(
    google::cloud::gkemulticloud::v1::GetAzureServerConfigRequest const&) {
  return Idempotency::kIdempotent;
}

std::unique_ptr<AzureClustersConnectionIdempotencyPolicy>
MakeDefaultAzureClustersConnectionIdempotencyPolicy() {
  return absl::make_unique<AzureClustersConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gkemulticloud_v1
}  // namespace cloud
}  // namespace google
