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
// source: google/cloud/bigquery/migration/v2/migration_service.proto

#include "google/cloud/bigquery/internal/migration_auth_decorator.h"
#include <google/cloud/bigquery/migration/v2/migration_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace bigquery_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

MigrationServiceAuth::MigrationServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<MigrationServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
MigrationServiceAuth::CreateMigrationWorkflow(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::
        CreateMigrationWorkflowRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->CreateMigrationWorkflow(context, request);
}

StatusOr<google::cloud::bigquery::migration::v2::MigrationWorkflow>
MigrationServiceAuth::GetMigrationWorkflow(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::GetMigrationWorkflowRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetMigrationWorkflow(context, request);
}

StatusOr<google::cloud::bigquery::migration::v2::ListMigrationWorkflowsResponse>
MigrationServiceAuth::ListMigrationWorkflows(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::ListMigrationWorkflowsRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListMigrationWorkflows(context, request);
}

Status MigrationServiceAuth::DeleteMigrationWorkflow(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::
        DeleteMigrationWorkflowRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->DeleteMigrationWorkflow(context, request);
}

Status MigrationServiceAuth::StartMigrationWorkflow(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::StartMigrationWorkflowRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->StartMigrationWorkflow(context, request);
}

StatusOr<google::cloud::bigquery::migration::v2::MigrationSubtask>
MigrationServiceAuth::GetMigrationSubtask(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::GetMigrationSubtaskRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetMigrationSubtask(context, request);
}

StatusOr<google::cloud::bigquery::migration::v2::ListMigrationSubtasksResponse>
MigrationServiceAuth::ListMigrationSubtasks(
    grpc::ClientContext& context,
    google::cloud::bigquery::migration::v2::ListMigrationSubtasksRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListMigrationSubtasks(context, request);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery_internal
}  // namespace cloud
}  // namespace google
