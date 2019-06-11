/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/. */

export const enum types {
  IMPORT_NOW_REQUESTED = '@@welcome/IMPORT_NOW_REQUESTED',
  GO_TO_TAB_REQUESTED = '@@welcome/GO_TO_TAB_REQUESTED',
  CLOSE_TAB_REQUESTED = '@@welcome/CLOSE_TAB_REQUESTED',
  CHANGE_DEFAULT_SEARCH_PROVIDER = '@@welcome/CHANGE_DEFAULT_SEARCH',
  IMPORT_DEFAULT_SEARCH_PROVIDERS_STARTED = '@@welcome/IMPORT_DEFAULT_SEARCH_PROVIDERS_STARTED',
  IMPORT_DEFAULT_SEARCH_PROVIDERS_SUCCESS = '@@welcome/IMPORT_DEFAULT_SEARCH_PROVIDERS_SUCCESS',
  IMPORT_DEFAULT_SEARCH_PROVIDERS_FAILURE = '@@welcome/IMPORT_DEFAULT_SEARCH_PROVIDERS_FAILURE'
}
