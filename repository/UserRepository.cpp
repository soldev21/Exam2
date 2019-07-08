

#include "UserRepository.h"


User* UserRepository::findByKey(string const& key) {
    return registry.get(key);
}
void UserRepository::save(User const& u){
    registry.put(u.getUsername(),u);
}
void UserRepository::remove(User const& u){
    registry.remove(u.getUsername());
}

vector<User*>* UserRepository::findAll(){
    vector<User*> *vector1 = new vector<User*>();
    for (map<string,User>::iterator it = registry.begin(); it!=registry.end();++it){
        vector1->push_back(&it->second);
    }
    return vector1;
}