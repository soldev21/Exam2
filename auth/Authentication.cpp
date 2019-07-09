

#include "Authentication.h"

AuthResponse *Authentication::authenticate(string username, string password){
    UserDao *dao = dao->getInstance();

    User *user = dao->getRepository().findByKey(username);
    AuthResponse *response = new AuthResponse();
    response->setUser(*user);
    if (!user) {
        response->setCode(1);
        response->setDesc("There is no such user: "+username+"\n");
    }else if (user->getPassword()!=(Utils::getHashed(password))){
        response->setCode(2);
        response->setDesc("Wrong password for user: "+username+"\n");
    }else {
        response->setCode(0);
        response->setDesc("Successful login\n");
    }
    return response;
}

bool Authentication::add(User &user){
    if (user.getPassword().empty()) return false;
    if (UserDao::getInstance()->getRepository().findByKey(user.getUsername())!=NULL) return false;
    if (checkUser(user)){
        user.setPassword(user.getPassword());
        UserDao::getInstance()->getRepository().save(user);
        return true;
    }else return false;
}


bool Authentication::checkUser(User const &user){
    return (!user.getAddress().empty()) && (!user.getName().empty()) && (!user.getPhone().empty());
}