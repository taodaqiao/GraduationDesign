// Copyright (c) 2015-2017, Satoshi Tanda. All rights reserved.
// Use of this source code is governed by a MIT-style license that can be
// found in the LICENSE file.

/// @file
/// @brief Declares interfaces to driver functions.

#ifndef YHYPERPLATFORM_DRIVER_H_
#define YHYPERPLATFORM_DRIVER_H_

#include <fltKernel.h>

extern "C" {
	_IRQL_requires_max_(PASSIVE_LEVEL) _Use_decl_annotations_ NTSTATUS	LoadHyperVisor(PDRIVER_OBJECT driver_object, PUNICODE_STRING registry_path);
	_IRQL_requires_max_(PASSIVE_LEVEL) _Use_decl_annotations_ void		UnLoadHyperVisor(PDRIVER_OBJECT driver_object);
} 

#endif  // HYPERPLATFORM_DRIVER_H_
