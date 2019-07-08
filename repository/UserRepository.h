
#ifndef UNTITLED_USERREPOSITORY_H
#define UNTITLED_USERREPOSITORY_H

#include "StandardRepository.h"
#include "../model/User.h"

class UserRepository: public StandardRepository<string,User> {
public:
    User *findByKey(const string &key);


    vector<User*>* findAll();

    void save(const User &u);

    void remove(const User &u);
};


#endif //UNTITLED_USERREPOSITORY_H
