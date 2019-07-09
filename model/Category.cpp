

#include "Category.h"

int Category::getId() const {
    return id;
}

void Category::setId(int id) {
    Category::id = id;
}

const string &Category::getDescription() const {
    return description;
}

void Category::setDescription(const string &description) {
    Category::description = description;
}

const string &Category::getSubCategory() const {
    return subCategory;
}

void Category::setSubCategory(const string &subCategory) {
    Category::subCategory = subCategory;
}

int Category::counter = 0;
