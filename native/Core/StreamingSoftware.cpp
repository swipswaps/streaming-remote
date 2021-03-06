/*
 * Copyright (c) 2018-present, Frederick Emmott.
 * All rights reserved.
 *
 * This source code is licensed under the MIT license found in the LICENSE file
 * in the root directory of this source tree.
 */

#include "StreamingSoftware.h"

StreamingSoftware::StreamingSoftware(
  std::shared_ptr<asio::io_context> context
): mContext(context) {
}

StreamingSoftware::~StreamingSoftware() {
}

asio::awaitable<bool> StreamingSoftware::setOutputDelay(
  const std::string& name,
  int64_t seconds) {
  co_return false;
}

asio::awaitable<std::vector<Scene>> StreamingSoftware::getScenes() {
  co_return std::vector<Scene>();
}

asio::awaitable<bool> StreamingSoftware::activateScene(const std::string& id) {
  co_return false;
}

asio::awaitable<std::string> StreamingSoftware::getSceneThumbnailAsBase64Png(const std::string& id) {
  co_return std::string();
}

asio::io_context& StreamingSoftware::getIoContext() const noexcept {
  return *mContext;
}
