/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BAT_ADS_INTERNAL_USER_ACTIVITY_USER_ACTIVITY_TRIGGER_INFO_H_
#define BAT_ADS_INTERNAL_USER_ACTIVITY_USER_ACTIVITY_TRIGGER_INFO_H_

#include <string>
#include <vector>

namespace ads {

struct UserActivityTriggerInfo {
  UserActivityTriggerInfo();
  UserActivityTriggerInfo(const UserActivityTriggerInfo& info);
  ~UserActivityTriggerInfo();

  bool operator==(const UserActivityTriggerInfo& rhs) const;
  bool operator!=(const UserActivityTriggerInfo& rhs) const;

  std::string event_sequence;
  double score = 0.0;
};

using UserActivityTriggers = std::vector<UserActivityTriggerInfo>;

}  // namespace ads

#endif  // BAT_ADS_INTERNAL_USER_ACTIVITY_USER_ACTIVITY_TRIGGER_INFO_H_
