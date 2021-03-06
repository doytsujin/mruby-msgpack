/*
 * The original is https://github.com/msgpack/msgpack-ruby
 * MessagePack for Ruby
 *
 * Copyright (C) 2008-2012 FURUHASHI Sadayuki
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */
#ifndef MSGPACK_MRUBY_CORE_EXT_H__
#define MSGPACK_MRUBY_CORE_EXT_H__

#if defined(__cplusplus)
extern "C" {
#endif

#include "compat.h"

void MessagePack_core_ext_module_init(mrb_state *mrb);

#if defined(__cplusplus)
}  /* extern "C" { */
#endif

#endif /* MSGPACK_MRUBY_CORE_EXT_H__ */