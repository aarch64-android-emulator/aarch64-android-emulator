// Copyright 2014 The Android Open Source Project
//
// This software is licensed under the terms of the GNU General Public
// License version 2, as published by the Free Software Foundation, and
// may be copied, distributed, and modified under those terms.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

#pragma once

#include <stddef.h>

#include <string>

namespace android {
namespace base {

// Alias used for historical reasons. Remove this header once all client
// code has been rewritten to use std::string directly.
using String = std::string;

}  // namespace base
}  // namespace android