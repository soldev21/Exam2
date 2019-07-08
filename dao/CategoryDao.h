//
// Created by s.huseynli on 7/8/2019.
//

#ifndef UNTITLED_CATEGORYDAO_H
#define UNTITLED_CATEGORYDAO_H

#include "../repository/CategoryRepository.h"

using namespace std;

class CategoryDao{
    static CategoryDao *categoryDao1;
    CategoryRepository repository;
    CategoryDao(){

    }
public:
    static CategoryDao* getInstance(){
        if (!categoryDao1) {
            categoryDao1 = new CategoryDao;
        }
        return categoryDao1;
    }
    CategoryRepository &getRepository();


};


#endif //UNTITLED_CATEGORYDAO_H
