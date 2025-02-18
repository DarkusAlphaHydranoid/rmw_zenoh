// Copyright 2023 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef DETAIL__RMW_INIT_OPTIONS_IMPL_HPP_
#define DETAIL__RMW_INIT_OPTIONS_IMPL_HPP_

#include <zenoh.h>

namespace rmw_zenoh_cpp
{
// TODO(YV): Consider using this again.
struct rmw_init_options_impl_s
{
  // An owned config.
  z_owned_config_t config;
};
}  // namespace rmw_zenoh_cpp

#endif  // DETAIL__RMW_INIT_OPTIONS_IMPL_HPP_
