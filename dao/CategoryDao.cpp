

#include "CategoryDao.h"

CategoryRepository & CategoryDao::getRepository(){
    return repository;
}

CategoryDao *CategoryDao::categoryDao1 = 0;