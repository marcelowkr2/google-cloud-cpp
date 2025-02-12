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
// source: google/cloud/orchestration/airflow/service/v1/environments.proto

#include "google/cloud/composer/internal/environments_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace composer_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

EnvironmentsTracingStub::EnvironmentsTracingStub(
    std::shared_ptr<EnvironmentsStub> child)
    : child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsTracingStub::AsyncCreateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::orchestration::airflow::service::v1::
        CreateEnvironmentRequest const& request) {
  return child_->AsyncCreateEnvironment(cq, std::move(context), request);
}

StatusOr<google::cloud::orchestration::airflow::service::v1::Environment>
EnvironmentsTracingStub::GetEnvironment(
    grpc::ClientContext& context,
    google::cloud::orchestration::airflow::service::v1::
        GetEnvironmentRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "GetEnvironment");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetEnvironment(context, request));
}

StatusOr<google::cloud::orchestration::airflow::service::v1::
             ListEnvironmentsResponse>
EnvironmentsTracingStub::ListEnvironments(
    grpc::ClientContext& context,
    google::cloud::orchestration::airflow::service::v1::
        ListEnvironmentsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.orchestration.airflow.service.v1.Environments",
      "ListEnvironments");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListEnvironments(context, request));
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsTracingStub::AsyncUpdateEnvironment(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::orchestration::airflow::service::v1::
        UpdateEnvironmentRequest const& request) {
  return child_->AsyncUpdateEnvironment(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsTracingStub::AsyncDeleteEnvironment(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::orchestration::airflow::service::v1::
        DeleteEnvironmentRequest const& request) {
  return child_->AsyncDeleteEnvironment(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsTracingStub::AsyncSaveSnapshot(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::orchestration::airflow::service::v1::
        SaveSnapshotRequest const& request) {
  return child_->AsyncSaveSnapshot(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsTracingStub::AsyncLoadSnapshot(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::orchestration::airflow::service::v1::
        LoadSnapshotRequest const& request) {
  return child_->AsyncLoadSnapshot(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
EnvironmentsTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> EnvironmentsTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<EnvironmentsStub> MakeEnvironmentsTracingStub(
    std::shared_ptr<EnvironmentsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<EnvironmentsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer_internal
}  // namespace cloud
}  // namespace google
