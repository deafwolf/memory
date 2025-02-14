/*
 * Copyright (C) 2022 hurricane <l@stdb.io>. All rights reserved.
 */
/**
 +------------------------------------------------------------------------------+
|                                                                              | 
|                                                                              | 
|                    ..######..########.########..########.                    | 
|                    .##....##....##....##.....##.##.....##                    | 
|                    .##..........##....##.....##.##.....##                    | 
|                    ..######.....##....##.....##.########.                    | 
|                    .......##....##....##.....##.##.....##                    | 
|                    .##....##....##....##.....##.##.....##                    | 
|                    ..######.....##....########..########.                    | 
|                                                                              | 
|                                                                              | 
|                                                                              | 
+------------------------------------------------------------------------------+ 
*/

#pragma once

#ifdef BOOST_STACKTRACE_USE_BACKTRACE

// means in STDB project.
#include "hilbert/assert.hpp"
#define Assert(expr) STDB_ASSERT(expr)


#else

#include <cassert>
#define Assert(expr) assert(expr)

#endif
