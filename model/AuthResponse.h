

#ifndef UNTITLED_AUTHRESPONSE_H
#define UNTITLED_AUTHRESPONSE_H

#include "User.h"


class AuthResponse {
private:
    int code;
    string desc;
    User user;
public:
    int getCode() const;

    void setCode(int code);

    const string &getDesc() const;

    void setDesc(const string &desc);

    User &getUser() ;

    void setUser(const User &user);
};


#endif //UNTITLED_AUTHRESPONSE_H
