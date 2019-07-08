

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