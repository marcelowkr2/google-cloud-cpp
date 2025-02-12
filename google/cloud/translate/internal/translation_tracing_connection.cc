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
// source: google/cloud/translate/v3/translation_service.proto

#include "google/cloud/translate/internal/translation_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace translate_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

TranslationServiceTracingConnection::TranslationServiceTracingConnection(
    std::shared_ptr<translate::TranslationServiceConnection> child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::translation::v3::TranslateTextResponse>
TranslationServiceTracingConnection::TranslateText(
    google::cloud::translation::v3::TranslateTextRequest const& request) {
  auto span = internal::MakeSpan(
      "translate::TranslationServiceConnection::TranslateText");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TranslateText(request));
}

StatusOr<google::cloud::translation::v3::DetectLanguageResponse>
TranslationServiceTracingConnection::DetectLanguage(
    google::cloud::translation::v3::DetectLanguageRequest const& request) {
  auto span = internal::MakeSpan(
      "translate::TranslationServiceConnection::DetectLanguage");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DetectLanguage(request));
}

StatusOr<google::cloud::translation::v3::SupportedLanguages>
TranslationServiceTracingConnection::GetSupportedLanguages(
    google::cloud::translation::v3::GetSupportedLanguagesRequest const&
        request) {
  auto span = internal::MakeSpan(
      "translate::TranslationServiceConnection::GetSupportedLanguages");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetSupportedLanguages(request));
}

StatusOr<google::cloud::translation::v3::TranslateDocumentResponse>
TranslationServiceTracingConnection::TranslateDocument(
    google::cloud::translation::v3::TranslateDocumentRequest const& request) {
  auto span = internal::MakeSpan(
      "translate::TranslationServiceConnection::TranslateDocument");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->TranslateDocument(request));
}

future<StatusOr<google::cloud::translation::v3::BatchTranslateResponse>>
TranslationServiceTracingConnection::BatchTranslateText(
    google::cloud::translation::v3::BatchTranslateTextRequest const& request) {
  return child_->BatchTranslateText(request);
}

future<StatusOr<google::cloud::translation::v3::BatchTranslateDocumentResponse>>
TranslationServiceTracingConnection::BatchTranslateDocument(
    google::cloud::translation::v3::BatchTranslateDocumentRequest const&
        request) {
  return child_->BatchTranslateDocument(request);
}

future<StatusOr<google::cloud::translation::v3::Glossary>>
TranslationServiceTracingConnection::CreateGlossary(
    google::cloud::translation::v3::CreateGlossaryRequest const& request) {
  return child_->CreateGlossary(request);
}

StreamRange<google::cloud::translation::v3::Glossary>
TranslationServiceTracingConnection::ListGlossaries(
    google::cloud::translation::v3::ListGlossariesRequest request) {
  auto span = internal::MakeSpan(
      "translate::TranslationServiceConnection::ListGlossaries");
  auto scope = opentelemetry::trace::Scope(span);
  auto sr = child_->ListGlossaries(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::translation::v3::Glossary>(std::move(span), std::move(sr));
}

StatusOr<google::cloud::translation::v3::Glossary>
TranslationServiceTracingConnection::GetGlossary(
    google::cloud::translation::v3::GetGlossaryRequest const& request) {
  auto span = internal::MakeSpan(
      "translate::TranslationServiceConnection::GetGlossary");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetGlossary(request));
}

future<StatusOr<google::cloud::translation::v3::DeleteGlossaryResponse>>
TranslationServiceTracingConnection::DeleteGlossary(
    google::cloud::translation::v3::DeleteGlossaryRequest const& request) {
  return child_->DeleteGlossary(request);
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<translate::TranslationServiceConnection>
MakeTranslationServiceTracingConnection(
    std::shared_ptr<translate::TranslationServiceConnection> conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn =
        std::make_shared<TranslationServiceTracingConnection>(std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace translate_internal
}  // namespace cloud
}  // namespace google
