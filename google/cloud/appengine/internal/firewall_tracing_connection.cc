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

#include "google/cloud/appengine/internal/firewall_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace appengine_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

FirewallTracingConnection::FirewallTracingConnection(
    std::shared_ptr<appengine::FirewallConnection> child)
    : child_(std::move(child)) {}

StreamRange<google::appengine::v1::FirewallRule>
FirewallTracingConnection::ListIngressRules(
    google::appengine::v1::ListIngressRulesRequest request) {
  auto span =
      internal::MakeSpan("appengine::FirewallConnection::ListIngressRules");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListIngressRules(std::move(request));
  return internal::MakeTracedStreamRange<google::appengine::v1::FirewallRule>(
      std::move(span), std::move(sr));
}

StatusOr<google::appengine::v1::BatchUpdateIngressRulesResponse>
FirewallTracingConnection::BatchUpdateIngressRules(
    google::appengine::v1::BatchUpdateIngressRulesRequest const& request) {
  auto span = internal::MakeSpan(
      "appengine::FirewallConnection::BatchUpdateIngressRules");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->BatchUpdateIngressRules(request));
}

StatusOr<google::appengine::v1::FirewallRule>
FirewallTracingConnection::CreateIngressRule(
    google::appengine::v1::CreateIngressRuleRequest const& request) {
  auto span =
      internal::MakeSpan("appengine::FirewallConnection::CreateIngressRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateIngressRule(request));
}

StatusOr<google::appengine::v1::FirewallRule>
FirewallTracingConnection::GetIngressRule(
    google::appengine::v1::GetIngressRuleRequest const& request) {
  auto span =
      internal::MakeSpan("appengine::FirewallConnection::GetIngressRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetIngressRule(request));
}

StatusOr<google::appengine::v1::FirewallRule>
FirewallTracingConnection::UpdateIngressRule(
    google::appengine::v1::UpdateIngressRuleRequest const& request) {
  auto span =
      internal::MakeSpan("appengine::FirewallConnection::UpdateIngressRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateIngressRule(request));
}

Status FirewallTracingConnection::DeleteIngressRule(
    google::appengine::v1::DeleteIngressRuleRequest const& request) {
  auto span =
      internal::MakeSpan("appengine::FirewallConnection::DeleteIngressRule");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteIngressRule(request));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<appengine::FirewallConnection> MakeFirewallTracingConnection(
    std::shared_ptr<appengine::FirewallConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<FirewallTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace appengine_internal
}  // namespace cloud
}  // namespace google
