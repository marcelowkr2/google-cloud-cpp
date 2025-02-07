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
// source: google/cloud/bigquery/reservation/v1/reservation.proto

#include "google/cloud/bigquery/reservation_connection_idempotency_policy.h"
#include "absl/memory/memory.h"
#include <memory>

namespace google {
namespace cloud {
namespace bigquery {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

ReservationServiceConnectionIdempotencyPolicy::
    ~ReservationServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<ReservationServiceConnectionIdempotencyPolicy>
ReservationServiceConnectionIdempotencyPolicy::clone() const {
  return absl::make_unique<ReservationServiceConnectionIdempotencyPolicy>(
      *this);
}

Idempotency ReservationServiceConnectionIdempotencyPolicy::CreateReservation(
    google::cloud::bigquery::reservation::v1::CreateReservationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ReservationServiceConnectionIdempotencyPolicy::ListReservations(
    google::cloud::bigquery::reservation::v1::
        ListReservationsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ReservationServiceConnectionIdempotencyPolicy::GetReservation(
    google::cloud::bigquery::reservation::v1::GetReservationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ReservationServiceConnectionIdempotencyPolicy::DeleteReservation(
    google::cloud::bigquery::reservation::v1::DeleteReservationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ReservationServiceConnectionIdempotencyPolicy::UpdateReservation(
    google::cloud::bigquery::reservation::v1::UpdateReservationRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ReservationServiceConnectionIdempotencyPolicy::CreateCapacityCommitment(
    google::cloud::bigquery::reservation::v1::
        CreateCapacityCommitmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ReservationServiceConnectionIdempotencyPolicy::ListCapacityCommitments(
    google::cloud::bigquery::reservation::v1::
        ListCapacityCommitmentsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
ReservationServiceConnectionIdempotencyPolicy::GetCapacityCommitment(
    google::cloud::bigquery::reservation::v1::
        GetCapacityCommitmentRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
ReservationServiceConnectionIdempotencyPolicy::DeleteCapacityCommitment(
    google::cloud::bigquery::reservation::v1::
        DeleteCapacityCommitmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ReservationServiceConnectionIdempotencyPolicy::UpdateCapacityCommitment(
    google::cloud::bigquery::reservation::v1::
        UpdateCapacityCommitmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ReservationServiceConnectionIdempotencyPolicy::SplitCapacityCommitment(
    google::cloud::bigquery::reservation::v1::
        SplitCapacityCommitmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
ReservationServiceConnectionIdempotencyPolicy::MergeCapacityCommitments(
    google::cloud::bigquery::reservation::v1::
        MergeCapacityCommitmentsRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ReservationServiceConnectionIdempotencyPolicy::CreateAssignment(
    google::cloud::bigquery::reservation::v1::CreateAssignmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ReservationServiceConnectionIdempotencyPolicy::ListAssignments(
    google::cloud::bigquery::reservation::v1::
        ListAssignmentsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ReservationServiceConnectionIdempotencyPolicy::DeleteAssignment(
    google::cloud::bigquery::reservation::v1::DeleteAssignmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ReservationServiceConnectionIdempotencyPolicy::SearchAssignments(
    google::cloud::bigquery::reservation::v1::
        SearchAssignmentsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ReservationServiceConnectionIdempotencyPolicy::SearchAllAssignments(
    google::cloud::bigquery::reservation::v1::
        SearchAllAssignmentsRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency ReservationServiceConnectionIdempotencyPolicy::MoveAssignment(
    google::cloud::bigquery::reservation::v1::MoveAssignmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ReservationServiceConnectionIdempotencyPolicy::UpdateAssignment(
    google::cloud::bigquery::reservation::v1::UpdateAssignmentRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency ReservationServiceConnectionIdempotencyPolicy::GetBiReservation(
    google::cloud::bigquery::reservation::v1::GetBiReservationRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency ReservationServiceConnectionIdempotencyPolicy::UpdateBiReservation(
    google::cloud::bigquery::reservation::v1::
        UpdateBiReservationRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<ReservationServiceConnectionIdempotencyPolicy>
MakeDefaultReservationServiceConnectionIdempotencyPolicy() {
  return absl::make_unique<ReservationServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace bigquery
}  // namespace cloud
}  // namespace google
