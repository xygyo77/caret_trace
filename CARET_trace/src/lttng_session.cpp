// Copyright 2022 Research Institute of Systems Planning, Inc.
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
// limitations under the License.#include <memory>

#include "caret_trace/lttng_session.hpp"

#include <rclcpp/rclcpp.hpp>

#include <chrono>
#include <fstream>
#include <iostream>
#include <memory>
#include <mutex>

/***
bool LttngSessionImpl::is_session_running() const
{
  std::lock_guard<std::mutex> lock(mtx_);

  // $ lttng list | grep --quiet '\[active\]'
  // Zero exit status if there is an active session, otherwise 1
  std::string command = "lttng list | grep --quiet \'\\[active\\]\'";
  auto fp = popen(command.c_str(), "r");
  if (fp == nullptr) {
    return false;
  }

  auto is_session_running = WEXITSTATUS(pclose(fp)) == 0;
  return is_session_running;
}
***/

bool LttngSessionImpl::is_session_running() const
{
  RCLCPP_INFO(rclcpp::get_logger("caret"), "-----------------------------------------");
  std::lock_guard<std::mutex> lock(mtx_);

  std::string command = "lttng list | grep --quiet '\\[active\\]'";
  FILE* fp = popen(command.c_str(), "r");
  if (fp == nullptr) {
    RCLCPP_INFO(rclcpp::get_logger("caret"), "Error: Failed to execute command. %s", command.c_str());
    return false;
  }

  char buffer[2048];
  std::string output = "";
  while (fgets(buffer, sizeof(buffer), fp) != nullptr) {
    output += buffer;
  }

  RCLCPP_INFO(rclcpp::get_logger("caret"), "Output: lttng list: %s", output.c_str());

  int exit_status = pclose(fp);
  bool is_session_running = WEXITSTATUS(exit_status) == 0;

  RCLCPP_INFO(rclcpp::get_logger("caret"), "open exit status %d WEXITSTATUS %d session %d", exit_status, WEXITSTATUS(exit_status), is_session_running);
  RCLCPP_INFO(rclcpp::get_logger("caret"), "is_session_running: %d", is_session_running);

  return is_session_running;
}


bool LttngSessionImpl::started_session_running() const
{
  return started_session_running_;
}
