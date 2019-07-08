//
// Created by s.huseynli on 7/8/2019.
//

#include "CategoryDao.h"

CategoryRepository & CategoryDao::getRepository(){
    return repository;
}

CategoryDao *CategoryDao::categoryDao1 = 0;