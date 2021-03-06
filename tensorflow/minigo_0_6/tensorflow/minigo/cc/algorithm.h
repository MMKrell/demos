// Copyright (c) 2020 Graphcore Ltd.
// Copyright 2018 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// This file has been modified by Graphcore Ltd.
// It has been modified to run the application on IPU hardware.

#ifndef CC_ALGORITHM_H_
#define CC_ALGORITHM_H_

#include <algorithm>
#include <utility>

#include "logging.h"

namespace minigo {

template <typename T>
inline int ArgMax(const T& container) {
  MG_CHECK(!container.empty());
  return std::distance(
      std::begin(container),
      std::max_element(std::begin(container), std::end(container)));
}

template <typename T, typename Compare>
inline int ArgMax(const T& container, Compare cmp) {
  MG_CHECK(!container.empty());
  return std::distance(std::begin(container),
                       std::max_element(std::begin(container),
                                        std::end(container), std::move(cmp)));
}

template <typename T, typename U>
inline int SearchSorted(const T& container, const U& value) {
  MG_CHECK(!container.empty());
  return std::distance(
      container.begin(),
      std::lower_bound(container.begin(), container.end(), value));
}

}  // namespace minigo

#endif  // CC_ALGORITHM_H_
