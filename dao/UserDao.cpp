#include "UserDao.h"

UserRepository & UserDao::getRepository(){
    return repository;
}

UserDao *UserDao::userDao = 0;

