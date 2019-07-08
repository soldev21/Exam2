#ifndef AUTH_RESPONSE
#define AUTH_RESPONSE

#include "User.cpp"

using namespace std;

class AuthResponse{
    int code;
    string desc;
    User user;
public:
    int getCode() const {
        return code;
    }

    void setCode(int code) {
        AuthResponse::code = code;
    }

    const string &getDesc() const {
        return desc;
    }

    void setDesc(const string &desc) {
        AuthResponse::desc = desc;
    }

    const User &getUser() const {
        return user;
    }

    void setUser(const User &user) {
        AuthResponse::user = user;
    }
};

#endif