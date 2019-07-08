#ifndef CATEGORY_REPO
#define CATEGORY_REPO

#include "StandardRepository.cpp"
#include "../model/Category.cpp"

class CategoryRepository : public StandardRepository<int,Category> {

public:
    Category* findByKey(int const& key) {
        return registry.get(key);
    }
    void save(Category const& u){
        registry.put(u.getId(),u);
    }
    void remove(Category const& u){
        registry.remove(u.getId());
    }

};

#endif