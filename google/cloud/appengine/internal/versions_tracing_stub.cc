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
// source: google/appengine/v1/appengine.proto

#include "google/cloud/appengine/internal/versions_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace appengine_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

VersionsTracingStub::VersionsTracingStub(std::shared_ptr<VersionsStub> child)
    : child_(std::move(child)) {}

StatusOr<google::appengine::v1::ListVersionsResponse>
VersionsTracingStub::ListVersions(
    grpc::ClientContext& context,
    google::appengine::v1::ListVersionsRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.appengine.v1.Versions", "ListVersions");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListVersions(context, request));
}

StatusOr<google::appengine::v1::Version> VersionsTracingStub::GetVersion(
    grpc::ClientContext& context,
    google::appengine::v1::GetVersionRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.appengine.v1.Versions", "GetVersion");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetVersion(context, request));
}

future<StatusOr<google::longrunning::Operation>>
VersionsTracingStub::AsyncCreateVersion(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::appengine::v1::CreateVersionRequest const& request) {
  return child_->AsyncCreateVersion(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VersionsTracingStub::AsyncUpdateVersion(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::appengine::v1::UpdateVersionRequest const& request) {
  return child_->AsyncUpdateVersion(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VersionsTracingStub::AsyncDeleteVersion(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::appengine::v1::DeleteVersionRequest const& request) {
  return child_->AsyncDeleteVersion(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
VersionsTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> VersionsTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<VersionsStub> MakeVersionsTracingStub(
    std::shared_ptr<VersionsStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<VersionsTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_internal
}  // namespace cloud
}  // namespace google
