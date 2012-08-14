/* Copyright (C) 2011-2012, Zeex
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
 */

#ifndef SAMPGDK_NATIVES_H
#define SAMPGDK_NATIVES_H

#include <sampgdk/config.h>
#include <sampgdk/amx.h>

#include <map>
#include <string>

namespace sampgdk {
namespace natives {

// Gets a native function previously added with SetNativeFunction().
// Returns NULL if the requested function does not exist.
AMX_NATIVE GetNativeFunction(const char *name);

// Same as GetNativeFunction() but prints a warning message to log when fails.
AMX_NATIVE GetNativeFunctionWarn(const char *name);

// Add a new native function or override an exiting one.
void SetNativeFunction(const char *name, AMX_NATIVE native);

} // namespace natives
} // namespace sampgdk

#endif // !SAMPGDK_NATIVES_H
