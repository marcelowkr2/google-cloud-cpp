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
// source: google/cloud/gaming/v1/game_server_clusters_service.proto

#include "google/cloud/gameservices/internal/game_server_clusters_auth_decorator.h"
#include <google/cloud/gaming/v1/game_server_clusters_service.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace gameservices_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

GameServerClustersServiceAuth::GameServerClustersServiceAuth(
    std::shared_ptr<google::cloud::internal::GrpcAuthenticationStrategy> auth,
    std::shared_ptr<GameServerClustersServiceStub> child)
    : auth_(std::move(auth)), child_(std::move(child)) {}

StatusOr<google::cloud::gaming::v1::ListGameServerClustersResponse>
GameServerClustersServiceAuth::ListGameServerClusters(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::ListGameServerClustersRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->ListGameServerClusters(context, request);
}

StatusOr<google::cloud::gaming::v1::GameServerCluster>
GameServerClustersServiceAuth::GetGameServerCluster(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::GetGameServerClusterRequest const& request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->GetGameServerCluster(context, request);
}

future<StatusOr<google::longrunning::Operation>>
GameServerClustersServiceAuth::AsyncCreateGameServerCluster(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::CreateGameServerClusterRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncCreateGameServerCluster(cq, *std::move(context),
                                                   request);
      });
}

StatusOr<google::cloud::gaming::v1::PreviewCreateGameServerClusterResponse>
GameServerClustersServiceAuth::PreviewCreateGameServerCluster(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::PreviewCreateGameServerClusterRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->PreviewCreateGameServerCluster(context, request);
}

future<StatusOr<google::longrunning::Operation>>
GameServerClustersServiceAuth::AsyncDeleteGameServerCluster(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::DeleteGameServerClusterRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncDeleteGameServerCluster(cq, *std::move(context),
                                                   request);
      });
}

StatusOr<google::cloud::gaming::v1::PreviewDeleteGameServerClusterResponse>
GameServerClustersServiceAuth::PreviewDeleteGameServerCluster(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::PreviewDeleteGameServerClusterRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->PreviewDeleteGameServerCluster(context, request);
}

future<StatusOr<google::longrunning::Operation>>
GameServerClustersServiceAuth::AsyncUpdateGameServerCluster(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::cloud::gaming::v1::UpdateGameServerClusterRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncUpdateGameServerCluster(cq, *std::move(context),
                                                   request);
      });
}

StatusOr<google::cloud::gaming::v1::PreviewUpdateGameServerClusterResponse>
GameServerClustersServiceAuth::PreviewUpdateGameServerCluster(
    grpc::ClientContext& context,
    google::cloud::gaming::v1::PreviewUpdateGameServerClusterRequest const&
        request) {
  auto status = auth_->ConfigureContext(context);
  if (!status.ok()) return status;
  return child_->PreviewUpdateGameServerCluster(context, request);
}

future<StatusOr<google::longrunning::Operation>>
GameServerClustersServiceAuth::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::GetOperationRequest const& request) {
  using ReturnType = StatusOr<google::longrunning::Operation>;
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) {
          return make_ready_future(ReturnType(std::move(context).status()));
        }
        return child->AsyncGetOperation(cq, *std::move(context), request);
      });
}

future<Status> GameServerClustersServiceAuth::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<grpc::ClientContext> context,
    google::longrunning::CancelOperationRequest const& request) {
  auto& child = child_;
  return auth_->AsyncConfigureContext(std::move(context))
      .then([cq, child,
             request](future<StatusOr<std::unique_ptr<grpc::ClientContext>>>
                          f) mutable {
        auto context = f.get();
        if (!context) return make_ready_future(std::move(context).status());
        return child->AsyncCancelOperation(cq, *std::move(context), request);
      });
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace gameservices_internal
}  // namespace cloud
}  // namespace google
