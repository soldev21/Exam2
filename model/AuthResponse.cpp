//
// Created by s.huseynli on 7/8/2019.
//

#include "AuthResponse.h"

int AuthResponse::getCode() const {
    return code;
}

void AuthResponse::setCode(int code) {
    AuthResponse::code = code;
}

const string &AuthResponse::getDesc() const {
    return desc;
}

void AuthResponse::setDesc(const string &desc) {
    AuthResponse::desc = desc;
}

User &AuthResponse::getUser() {
    return user;
}

void AuthResponse::setUser(const User &user) {
    AuthResponse::user = user;
}
