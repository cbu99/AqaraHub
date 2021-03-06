#ifndef _ZCL_TO_JSON_H_
#define _ZCL_TO_JSON_H_
#include <tao/json.hpp>
#include "zcl/zcl.h"

namespace zcl {
tao::json::value to_json(const ZclVariant& variant, bool typed);
}  // namespace zcl
#endif  // _ZCL_TO_JSON_H_
