#ifndef UNTITLED_USERDAO_H
#define UNTITLED_USERDAO_H

#include "../repository/UserRepository.h"

using namespace std;

class UserDao{
    static UserDao *userDao;
    UserRepository repository;
    UserDao(){

    }
public:
    static UserDao* getInstance(){
        if (!userDao) {
            userDao = new UserDao;
        }
        return userDao;
    }
    UserRepository &getRepository();


};

#endif //UNTITLED_USERDAO_H
