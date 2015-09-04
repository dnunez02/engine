// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SKY_ENGINE_CORE_TEXT_FONTSTYLE_H_
#define SKY_ENGINE_CORE_TEXT_FONTSTYLE_H_

#include "sky/engine/tonic/dart_converter.h"

namespace blink {

class FontStyle {};

template <>
struct DartConverter<FontStyle>
    : public DartConverterEnum<int> {};

} // namespace blink

#endif  // SKY_ENGINE_CORE_TEXT_FONTSTYLE_H_
