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
// source: google/api/servicemanagement/v1/servicemanager.proto

#include "google/cloud/servicemanagement/internal/service_manager_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace servicemanagement_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

ServiceManagerTracingConnection::ServiceManagerTracingConnection(
    std::shared_ptr<servicemanagement::ServiceManagerConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::api::servicemanagement::v1::ManagedService>
ServiceManagerTracingConnection::ListServices(
    google::api::servicemanagement::v1::ListServicesRequest request) {
  auto span = internal::MakeSpan(
      "servicemanagement::ServiceManagerConnection::ListServices");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListServices(std::move(request));
  return internal::MakeTracedStreamRange<
      google::api::servicemanagement::v1::ManagedService>(std::move(span),
                                                          std::move(sr));
}

StatusOr<google::api::servicemanagement::v1::ManagedService>
ServiceManagerTracingConnection::GetService(
    google::api::servicemanagement::v1::GetServiceRequest const& request) {
  auto span = internal::MakeSpan(
      "servicemanagement::ServiceManagerConnection::GetService");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetService(request));
}

future<StatusOr<google::api::servicemanagement::v1::ManagedService>>
ServiceManagerTracingConnection::CreateService(
    google::api::servicemanagement::v1::CreateServiceRequest const& request) {
  return child_->CreateService(request);
}

future<StatusOr<google::api::servicemanagement::v1::OperationMetadata>>
ServiceManagerTracingConnection::DeleteService(
    google::api::servicemanagement::v1::DeleteServiceRequest const& request) {
  return child_->DeleteService(request);
}

future<StatusOr<google::api::servicemanagement::v1::UndeleteServiceResponse>>
ServiceManagerTracingConnection::UndeleteService(
    google::api::servicemanagement::v1::UndeleteServiceRequest const& request) {
  return child_->UndeleteService(request);
}

StreamRange<google::api::Service>
ServiceManagerTracingConnection::ListServiceConfigs(
    google::api::servicemanagement::v1::ListServiceConfigsRequest request) {
  auto span = internal::MakeSpan(
      "servicemanagement::ServiceManagerConnection::ListServiceConfigs");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListServiceConfigs(std::move(request));
  return internal::MakeTracedStreamRange<google::api::Service>(std::move(span),
                                                               std::move(sr));
}

StatusOr<google::api::Service>
ServiceManagerTracingConnection::GetServiceConfig(
    google::api::servicemanagement::v1::GetServiceConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "servicemanagement::ServiceManagerConnection::GetServiceConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetServiceConfig(request));
}

StatusOr<google::api::Service>
ServiceManagerTracingConnection::CreateServiceConfig(
    google::api::servicemanagement::v1::CreateServiceConfigRequest const&
        request) {
  auto span = internal::MakeSpan(
      "servicemanagement::ServiceManagerConnection::CreateServiceConfig");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateServiceConfig(request));
}

future<StatusOr<google::api::servicemanagement::v1::SubmitConfigSourceResponse>>
ServiceManagerTracingConnection::SubmitConfigSource(
    google::api::servicemanagement::v1::SubmitConfigSourceRequest const&
        request) {
  return child_->SubmitConfigSource(request);
}

StreamRange<google::api::servicemanagement::v1::Rollout>
ServiceManagerTracingConnection::ListServiceRollouts(
    google::api::servicemanagement::v1::ListServiceRolloutsRequest request) {
  auto span = internal::MakeSpan(
      "servicemanagement::ServiceManagerConnection::ListServiceRollouts");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListServiceRollouts(std::move(request));
  return internal::MakeTracedStreamRange<
      google::api::servicemanagement::v1::Rollout>(std::move(span),
                                                   std::move(sr));
}

StatusOr<google::api::servicemanagement::v1::Rollout>
ServiceManagerTracingConnection::GetServiceRollout(
    google::api::servicemanagement::v1::GetServiceRolloutRequest const&
        request) {
  auto span = internal::MakeSpan(
      "servicemanagement::ServiceManagerConnection::GetServiceRollout");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetServiceRollout(request));
}

future<StatusOr<google::api::servicemanagement::v1::Rollout>>
ServiceManagerTracingConnection::CreateServiceRollout(
    google::api::servicemanagement::v1::CreateServiceRolloutRequest const&
        request) {
  return child_->CreateServiceRollout(request);
}

StatusOr<google::api::servicemanagement::v1::GenerateConfigReportResponse>
ServiceManagerTracingConnection::GenerateConfigReport(
    google::api::servicemanagement::v1::GenerateConfigReportRequest const&
        request) {
  auto span = internal::MakeSpan(
      "servicemanagement::ServiceManagerConnection::GenerateConfigReport");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GenerateConfigReport(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<servicemanagement::ServiceManagerConnection>
MakeServiceManagerTracingConnection(
    std::shared_ptr<servicemanagement::ServiceManagerConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<ServiceManagerTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace servicemanagement_internal
}  // namespace cloud
}  // namespace google
