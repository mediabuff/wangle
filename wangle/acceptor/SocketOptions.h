/*
 *  Copyright (c) 2017, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */
#pragma once

#include <folly/io/async/AsyncSocket.h>

namespace wangle {

/**
 * Returns a copy of the socket options excluding options with the given
 * level.
 */
folly::AsyncSocket::OptionMap filterIPSocketOptions(
  const folly::AsyncSocket::OptionMap& allOptions,
  const int addrFamily);

} // namespace wangle
