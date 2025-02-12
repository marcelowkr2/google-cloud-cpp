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
// source: google/cloud/video/livestream/v1/service.proto

#include "google/cloud/video/internal/livestream_tracing_stub.h"
#include "google/cloud/internal/grpc_opentelemetry.h"

namespace google {
namespace cloud {
namespace video_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

LivestreamServiceTracingStub::LivestreamServiceTracingStub(
    std::shared_ptr<LivestreamServiceStub> child)
    : child_(std::move(child)) {}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncCreateChannel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::CreateChannelRequest const& request) {
  return child_->AsyncCreateChannel(cq, std::move(context), request);
}

StatusOr<google::cloud::video::livestream::v1::ListChannelsResponse>
LivestreamServiceTracingStub::ListChannels(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::ListChannelsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "ListChannels");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListChannels(context, request));
}

StatusOr<google::cloud::video::livestream::v1::Channel>
LivestreamServiceTracingStub::GetChannel(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::GetChannelRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "GetChannel");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->GetChannel(context, request));
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncDeleteChannel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::DeleteChannelRequest const& request) {
  return child_->AsyncDeleteChannel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncUpdateChannel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::UpdateChannelRequest const& request) {
  return child_->AsyncUpdateChannel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncStartChannel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::StartChannelRequest const& request) {
  return child_->AsyncStartChannel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncStopChannel(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::StopChannelRequest const& request) {
  return child_->AsyncStopChannel(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncCreateInput(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::CreateInputRequest const& request) {
  return child_->AsyncCreateInput(cq, std::move(context), request);
}

StatusOr<google::cloud::video::livestream::v1::ListInputsResponse>
LivestreamServiceTracingStub::ListInputs(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::ListInputsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "ListInputs");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListInputs(context, request));
}

StatusOr<google::cloud::video::livestream::v1::Input>
LivestreamServiceTracingStub::GetInput(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::GetInputRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "GetInput");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetInput(context, request));
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncDeleteInput(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::DeleteInputRequest const& request) {
  return child_->AsyncDeleteInput(cq, std::move(context), request);
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncUpdateInput(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::video::livestream::v1::UpdateInputRequest const& request) {
  return child_->AsyncUpdateInput(cq, std::move(context), request);
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceTracingStub::CreateEvent(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::CreateEventRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "CreateEvent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->CreateEvent(context, request));
}

StatusOr<google::cloud::video::livestream::v1::ListEventsResponse>
LivestreamServiceTracingStub::ListEvents(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::ListEventsRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "ListEvents");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->ListEvents(context, request));
}

StatusOr<google::cloud::video::livestream::v1::Event>
LivestreamServiceTracingStub::GetEvent(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::GetEventRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "GetEvent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span, child_->GetEvent(context, request));
}

Status LivestreamServiceTracingStub::DeleteEvent(
    grpc::ClientContext& context,
    google::cloud::video::livestream::v1::DeleteEventRequest const& request) {
  auto span = internal::MakeSpanGrpc(
      "google.cloud.video.livestream.v1.LivestreamService", "DeleteEvent");
  auto scope = opentelemetry::trace::Scope(span);
  internal::InjectTraceContext(context, internal::CurrentOptions());
  return internal::EndSpan(context, *span,
                           child_->DeleteEvent(context, request));
}

future<StatusOr<google::longrunning::Operation>>
LivestreamServiceTracingStub::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  return child_->AsyncGetOperation(cq, std::move(context), request);
}

future<Status> LivestreamServiceTracingStub::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  return child_->AsyncCancelOperation(cq, std::move(context), request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<LivestreamServiceStub> MakeLivestreamServiceTracingStub(
    std::shared_ptr<LivestreamServiceStub> stub) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return std::make_shared<LivestreamServiceTracingStub>(std::move(stub));
#else
  return stub;
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace video_internal
}  // namespace cloud
}  // namespace google
