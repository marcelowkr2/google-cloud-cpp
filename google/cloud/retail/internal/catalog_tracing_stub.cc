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
// source: google/cloud/retail/v2/catalog_service.proto

#include "google/cloud/retail/internal/catalog_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace retail_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

CatalogServiceTracingStub::CatalogServiceTracingStub(
    std::shared_ptr<CatalogServiceStub> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::retail::v2::ListCatalogsResponse>
CatalogServiceTracingStub::ListCatalogs(
    grpc::ClientContext& context,
    google::cloud::retail::v2::ListCatalogsRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.CatalogService",
                                     "ListCatalogs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListCatalogs(context, request));
}

StatusOr<google::cloud::retail::v2::Catalog>
CatalogServiceTracingStub::UpdateCatalog(
    grpc::ClientContext& context,
    google::cloud::retail::v2::UpdateCatalogRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.CatalogService",
                                     "UpdateCatalog");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateCatalog(context, request));
}

Status CatalogServiceTracingStub::SetDefaultBranch(
    grpc::ClientContext& context,
    google::cloud::retail::v2::SetDefaultBranchRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.CatalogService",
                                     "SetDefaultBranch");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->SetDefaultBranch(context, request));
}

StatusOr<google::cloud::retail::v2::GetDefaultBranchResponse>
CatalogServiceTracingStub::GetDefaultBranch(
    grpc::ClientContext& context,
    google::cloud::retail::v2::GetDefaultBranchRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.CatalogService",
                                     "GetDefaultBranch");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetDefaultBranch(context, request));
}

StatusOr<google::cloud::retail::v2::CompletionConfig>
CatalogServiceTracingStub::GetCompletionConfig(
    grpc::ClientContext& context,
    google::cloud::retail::v2::GetCompletionConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.CatalogService",
                                     "GetCompletionConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetCompletionConfig(context, request));
}

StatusOr<google::cloud::retail::v2::CompletionConfig>
CatalogServiceTracingStub::UpdateCompletionConfig(
    grpc::ClientContext& context,
    google::cloud::retail::v2::UpdateCompletionConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.CatalogService",
                                     "UpdateCompletionConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateCompletionConfig(context, request));
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceTracingStub::GetAttributesConfig(
    grpc::ClientContext& context,
    google::cloud::retail::v2::GetAttributesConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.CatalogService",
                                     "GetAttributesConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetAttributesConfig(context, request));
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceTracingStub::UpdateAttributesConfig(
    grpc::ClientContext& context,
    google::cloud::retail::v2::UpdateAttributesConfigRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.CatalogService",
                                     "UpdateAttributesConfig");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->UpdateAttributesConfig(context, request));
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceTracingStub::AddCatalogAttribute(
    grpc::ClientContext& context,
    google::cloud::retail::v2::AddCatalogAttributeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.CatalogService",
                                     "AddCatalogAttribute");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->AddCatalogAttribute(context, request));
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceTracingStub::RemoveCatalogAttribute(
    grpc::ClientContext& context,
    google::cloud::retail::v2::RemoveCatalogAttributeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.CatalogService",
                                     "RemoveCatalogAttribute");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->RemoveCatalogAttribute(context, request));
}

StatusOr<google::cloud::retail::v2::AttributesConfig>
CatalogServiceTracingStub::ReplaceCatalogAttribute(
    grpc::ClientContext& context,
    google::cloud::retail::v2::ReplaceCatalogAttributeRequest const& request) {
  auto span = internal::MakeSpanGrpc("google.cloud.retail.v2.CatalogService",
                                     "ReplaceCatalogAttribute");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ReplaceCatalogAttribute(context, request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<CatalogServiceStub> MakeCatalogServiceTracingStub(
    std::shared_ptr<CatalogServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<CatalogServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_internal
}  // namespace cloud
}  // namespace google
