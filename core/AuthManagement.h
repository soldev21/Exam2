

#ifndef UNTITLED_AUTHMANAGEMENT_H
#define UNTITLED_AUTHMANAGEMENT_H

#include "../auth/Authentication.h"
class AuthManagement{
    static bool initial;
    static Authentication authentication;
    static User * register1();
    static AuthManagement *management;
    AuthManagement(){}
public:
    static User* registerUser();
    static User* login();
    static AuthManagement *getInstance() {
        if (!management) {
            management = new AuthManagement;
        }
        return management;
    }
};

Authentication AuthManagement::authentication = Authentication();
AuthManagement *AuthManagement::management = 0 ;
bool AuthManagement::initial = true;

User* AuthManagement::registerUser() {
    User *user;
    bool b = false;
    if (initial){
        Utils::writeln("It is first login. Please set Admin details");
        user = register1();
        user->setAdmin(true);
        b= authentication.add(*user);
        initial=false;
    }else {
        Utils::writeln("Please enter User details");
        user = register1();
        authentication.add(*user);
    }
    return (b) ? user : NULL;
}


User* AuthManagement::register1() {
    string s;
    User *user = new User();
    Utils::write("Username: ");
    s = Utils::read();
    user->setUsername(s);
    Utils::write("Password: ");
    s = Utils::read();
    user->setPassword(Utils::getHashed(s));
    Utils::write("Name: ");
    s = Utils::read();
    user->setName(s);
    Utils::write("Address: ");
    s = Utils::read();
    user->setAddress(s);
    Utils::write("Phone: ");
    s = Utils::read();
    user->setPhone(s);
    return user;
}

User* AuthManagement::login(){
    Utils::writeln("Please login");
    string username;
    string password;
    Utils::write("Username: ");
    username = Utils::read();
    Utils::write("Password: ");
    password = Utils::read();
    AuthResponse *authResponse = authentication.authenticate(username,password);
    if (authResponse->getCode()==0){
        Utils::write(authResponse->getDesc());
        return &authResponse->getUser();
    }else {
        Utils::write(authResponse->getDesc());
        return NULL;
    }
}

#endif //UNTITLED_AUTHMANAGEMENT_H
