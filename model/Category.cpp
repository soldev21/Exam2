#ifndef CATEGORY
#define CATEGORY

#include <string>

using namespace std;

class Category{
private:
    int id;
    string description;
    string subCategory;
public:
    int getId() const {
        return id;
    }

    void setId(int id) {
        Category::id = id;
    }

    const string &getDescription() const {
        return description;
    }

    void setDescription(const string &description) {
        Category::description = description;
    }

    const string &getSubCategory() const {
        return subCategory;
    }

    void setSubCategory(const string &subCategory) {
        Category::subCategory = subCategory;
    }
};

#endif