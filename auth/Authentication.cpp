#ifndef AUTH
#define AUTH

#include "../model/AuthResponse.cpp"
#include "../dao/UserDao.cpp"
#include "../util/Utils.cpp"

class Authentication{
public:
    const AuthResponse authenticate(string username, string password){
        User *user = UserDao::userRepository.findByKey(username);
        AuthResponse response;
        response.setUser(*user);
        if (!user) {
            response.setCode(1);
            response.setDesc("There is no such user: "+username+"\n");
        }else if (user->getPassword()!=(Utils::getHashed(password))){
            response.setCode(2);
            response.setDesc("Wrong password for user: "+username+"\n");
        }else {
            response.setCode(0);
            response.setDesc("Successful login\n");
        }
        return response;
    }

};

#endif