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

#include "tf_utils.h"

#include "logging.h"

namespace minigo {
namespace tf_utils {

void WriteGameExamples(const std::string& output_dir,
                       const std::string& output_name, const Game& game) {
  MG_LOG(FATAL)
      << "Can't write TensorFlow examples without TensorFlow support enabled. "
         "Please recompile, passing --define=tf=1 to bazel build.";
}

}  // namespace tf_utils
}  // namespace minigo
