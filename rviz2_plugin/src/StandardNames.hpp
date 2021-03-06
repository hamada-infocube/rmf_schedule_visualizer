/*
 * Copyright (C) 2020 Open Source Robotics Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#ifndef RVIZ2_PLUGIN__SRC__STANDARDNAMES_HPP
#define RVIZ2_PLUGIN__SRC__STANDARDNAMES_HPP

#include <string>

namespace rviz2_plugin {

const std::string LiftPanelSessionId = "lift_panel_session";
const std::string AdapterLiftRequestTopicName = "adapter_lift_requests";
const std::string LiftRequestTopicName = "lift_requests";
const std::string LiftStateTopicName = "lift_states";

const std::string DoorPanelRequesterId = "door_panel_requester";
const std::string AdapterDoorRequestTopicName = "adapter_door_requests";
const std::string DoorRequestTopicName = "door_requests";
const std::string DoorStateTopicName = "door_states";

} // namespace rviz2_plugin

#endif // RVIZ2_PLUGIN__SRC__STANDARDNAMES_HPP
