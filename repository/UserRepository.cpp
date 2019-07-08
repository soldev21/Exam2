#ifndef USER_REPO
#define USER_REPO

#include "StandardRepository.cpp"
#include "../model/User.cpp"

class UserRepository : public StandardRepository<string,User> {

public:
    User* findByKey(string const& key) {
        return registry.get(key);
    }
    void save(User const& u){
        registry.put(u.getUsername(),u);
    }
    void remove(User const& u){
        registry.remove(u.getUsername());
    }

};

#endif