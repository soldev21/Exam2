//
// Created by s.huseynli on 7/8/2019.
//

#ifndef UNTITLED_CATEGORYREPOSITORY_H
#define UNTITLED_CATEGORYREPOSITORY_H

#include "StandardRepository.h"
#include "../model/Category.h"


class CategoryRepository: public StandardRepository<int,Category> {
public:
    Category *findByKey(const int &key);

    void save(const Category &u);

    void remove(const Category &u);
};


#endif //UNTITLED_CATEGORYREPOSITORY_H
