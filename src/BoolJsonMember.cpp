/**
 * Copyright 2015 Colin Doig.  Distributed under the MIT license.
 */

#include "greentop/BoolJsonMember.h"

namespace greentop {

BoolJsonMember::BoolJsonMember() {
    valid = false;
}

BoolJsonMember::BoolJsonMember(bool value) : value(value) {
    valid = true;
}

void BoolJsonMember::fromJson(const Json::Value& json) {
    value = json.asBool();
    valid = true;
}

Json::Value BoolJsonMember::toJson() const {
    Json::Value json(value);
    return json;
}

BoolJsonMember::operator bool () const {
    return value;
}

}
