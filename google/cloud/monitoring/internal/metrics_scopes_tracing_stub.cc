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
// source: google/monitoring/metricsscope/v1/metrics_scopes.proto

#include "google/cloud/monitoring/internal/metrics_scopes_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace monitoring_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

MetricsScopesTracingStub::MetricsScopesTracingStub(
    std::shared_ptr<MetricsScopesStub> child)
    : child_(std::move(child)) {}

StatusOr<google::monitoring::metricsscope::v1::MetricsScope>
MetricsScopesTracingStub::GetMetricsScope(
    grpc::ClientContext& context,
    google::monitoring::metricsscope::v1::GetMetricsScopeRequest const&
        request) {
  auto span = internal::MakeSpanGrpc(
      "google.monitoring.metricsscope.v1.MetricsScopes", "GetMetricsScope");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetMetricsScope(context, request));
}

StatusOr<google::monitoring::metricsscope::v1::
             ListMetricsScopesByMonitoredProjectResponse>
MetricsScopesTracingStub::ListMetricsScopesByMonitoredProject(
    grpc::ClientContext& context,
    google::monitoring::metricsscope::v1::
        ListMetricsScopesByMonitoredProjectRequest const& request) {
  auto span =
      internal::MakeSpanGrpc("google.monitoring.metricsscope.v1.MetricsScopes",
                             "ListMetricsScopesByMonitoredProject");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(
      context, *span,
      child_->ListMetricsScopesByMonitoredProject(context, request));
}

future<StatusOr<google::longrunning::Operation>>
MetricsScopesTracingStub::AsyncCreateMonitoredProject(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::monitoring::metricsscope::v1::CreateMonitoredProjectRequest const&
        request) {
  return child_->AsyncCreateMonitoredProject(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MetricsScopesTracingStub::AsyncDeleteMonitoredProject(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::monitoring::metricsscope::v1::DeleteMonitoredProjectRequest const&
        request) {
  return child_->AsyncDeleteMonitoredProject(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
MetricsScopesTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> MetricsScopesTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<MetricsScopesStub> MakeMetricsScopesTracingStub(
    std::shared_ptr<MetricsScopesStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<MetricsScopesTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring_internal
}  // namespace cloud
}  // namespace google
