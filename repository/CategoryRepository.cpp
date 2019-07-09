

#include "CategoryRepository.h"


Category* CategoryRepository::findByKey(int const& key) {
    return registry.get(key);
}
void CategoryRepository::save(Category const& u){
    registry.put(u.getId(),u);
}
void CategoryRepository::remove(Category const& u){
    registry.remove(u.getId());
}

vector<Category*>* CategoryRepository::findAll(){
    vector<Category*> *vector1 = new vector<Category*>();
    for (map<int,Category>::iterator it = registry.begin(); it!=registry.end();++it){
        vector1->push_back(&it->second);
    }
    return vector1;
}