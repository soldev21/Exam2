//
// Created by s.huseynli on 7/8/2019.
//

#ifndef UNTITLED_AUTHENTICATION_H
#define UNTITLED_AUTHENTICATION_H

#include "../model/AuthResponse.h"
#include "../dao/UserDao.h"
#include "../util/Utils.h"

class Authentication {
    bool checkUser(User const &user);
public:
    const AuthResponse authenticate(string username, string password);
    bool add(User&);
};


#endif //UNTITLED_AUTHENTICATION_H
