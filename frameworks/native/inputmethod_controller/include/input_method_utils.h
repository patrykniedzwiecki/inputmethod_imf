/*
 * Copyright (C) 2021-2023 Huawei Device Co., Ltd.
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

#ifndef FRAMEWORKS_INPUTMETHOD_CONTROLLER_INCLUDE_INPUT_METHOD_UTILS_H
#define FRAMEWORKS_INPUTMETHOD_CONTROLLER_INCLUDE_INPUT_METHOD_UTILS_H

#include <stdint.h>

namespace OHOS {
namespace MiscServices {
enum class EnterKeyType { UNSPECIFIED = 0, NONE, GO, SEARCH, SEND, NEXT, DONE, PREVIOUS };

enum class TextInputType {
    NONE = -1,
    TEXT = 0,
    MULTILINE,
    NUMBER,
    PHONE,
    DATETIME,
    EMAIL_ADDRESS,
    URL,
    VISIBLE_PASSWORD,
};

enum class Direction {
    NONE = 0,
    UP = 1,
    DOWN,
    LEFT,
    RIGHT,
};

enum class ExtendAction {
    SELECT_ALL = 0,
    CUT = 3,
    COPY,
    PAUSE,
};

class Configuration {
public:
    EnterKeyType GetEnterKeyType() const
    {
        return enterKeyType;
    }

    void SetEnterKeyType(EnterKeyType keyType)
    {
        enterKeyType = keyType;
    }

    TextInputType GetTextInputType() const
    {
        return textInputType;
    }

    void SetTextInputType(TextInputType textType)
    {
        textInputType = textType;
    }

private:
    EnterKeyType enterKeyType = EnterKeyType::UNSPECIFIED;
    TextInputType textInputType = TextInputType::TEXT;
};

struct CursorInfo {
    double left = 0.0;
    double top = 0.0;
    double width = 0.0;
    double height = 0.0;
};

class KeyEvent {
};

enum class KeyboardStatus { NONE = 0, HIDE, SHOW };

class FunctionKey {
public:
    EnterKeyType GetEnterKeyType() const
    {
        return enterKeyType;
    }

    void SetEnterKeyType(EnterKeyType keyType)
    {
        enterKeyType = keyType;
    }

private:
    EnterKeyType enterKeyType = EnterKeyType::UNSPECIFIED;
};
} // namespace MiscServices
} // namespace OHOS
#endif // FRAMEWORKS_INPUTMETHOD_CONTROLLER_INCLUDE_INPUT_METHOD_UTILS_H
