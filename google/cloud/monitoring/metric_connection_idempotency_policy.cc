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
// source: google/monitoring/v3/metric_service.proto

#include "google/cloud/monitoring/metric_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace monitoring {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

MetricServiceConnectionIdempotencyPolicy::
    ~MetricServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<MetricServiceConnectionIdempotencyPolicy>
MetricServiceConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<MetricServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency
MetricServiceConnectionIdempotencyPolicy::ListMonitoredResourceDescriptors(
    google::monitoring::v3::
        ListMonitoredResourceDescriptorsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
MetricServiceConnectionIdempotencyPolicy::GetMonitoredResourceDescriptor(
    google::monitoring::v3::GetMonitoredResourceDescriptorRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MetricServiceConnectionIdempotencyPolicy::ListMetricDescriptors(
    google::monitoring::v3::ListMetricDescriptorsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency MetricServiceConnectionIdempotencyPolicy::GetMetricDescriptor(
    google::monitoring::v3::GetMetricDescriptorRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency MetricServiceConnectionIdempotencyPolicy::CreateMetricDescriptor(
    google::monitoring::v3::CreateMetricDescriptorRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MetricServiceConnectionIdempotencyPolicy::DeleteMetricDescriptor(
    google::monitoring::v3::DeleteMetricDescriptorRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MetricServiceConnectionIdempotencyPolicy::ListTimeSeries(
    google::monitoring::v3::ListTimeSeriesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency MetricServiceConnectionIdempotencyPolicy::CreateTimeSeries(
    google::monitoring::v3::CreateTimeSeriesRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency MetricServiceConnectionIdempotencyPolicy::CreateServiceTimeSeries(
    google::monitoring::v3::CreateTimeSeriesRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<MetricServiceConnectionIdempotencyPolicy>
MakeDefaultMetricServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<MetricServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace monitoring
}  // namespace cloud
}  // namespace google
