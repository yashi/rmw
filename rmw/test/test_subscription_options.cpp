// Copyright 2020 Open Source Robotics Foundation, Inc.
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

#include "gmock/gmock.h"
#include "rmw/subscription_options.h"
#include "rmw/types.h"

TEST(rmw_subscription_options, get_default_subscription_options)
{
  rmw_subscription_options_t options = rmw_get_default_subscription_options();
  EXPECT_EQ(options.rmw_specific_subscription_payload, nullptr);
  EXPECT_EQ(options.ignore_local_publications, false);
  EXPECT_EQ(
    options.require_unique_network_flow_endpoints,
    RMW_UNIQUE_NETWORK_FLOW_ENDPOINTS_NOT_REQUIRED);
  EXPECT_EQ(options.content_filter_options, nullptr);
}
