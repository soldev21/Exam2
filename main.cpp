#include <iostream>

#include "util/Utils.h"
#include "model/Question.h"
#include "model/AuthResponse.h"
#include "auth/Authentication.h"
#include "dao/UserDao.h"
#include "core/CoreManagement.h"

using namespace std;



int main() {

//    UserDao *userDao = userDao->getInstance();
//    Authentication authentication;
//    string username = "sherif";
//    string password = "123456";
//    User user;
//    user.setPassword(Utils::getHashed(password));
//    user.setUsername(username);
//    userDao->getRepository().save(user);
//    AuthResponse authResponse = authentication.authenticate(username,password);
//    cout<< authResponse.getCode() << " " << authResponse.getUser().getUsername() << endl;

    CoreManagement coreManagement;
    coreManagement.start();

    return 0;
}