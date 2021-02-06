/* Copyright (c) 2020 The Brave Authors. All rights reserved.
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

#ifndef BAT_ADS_INTERNAL_USER_ACTIVITY_USER_ACTIVITY_SCORING_H_
#define BAT_ADS_INTERNAL_USER_ACTIVITY_USER_ACTIVITY_SCORING_H_

#include "bat/ads/internal/user_activity/user_activity_event_info.h"
#include "bat/ads/internal/user_activity/user_activity_trigger_info.h"

namespace ads {

double GetUserActivityScore(const UserActivityTriggers& triggers,
                            const UserActivityEvents& events);

}  // namespace ads

#endif  // BAT_ADS_INTERNAL_USER_ACTIVITY_USER_ACTIVITY_SCORING_H_
