

#ifndef UNTITLED_CATEGORY_H
#define UNTITLED_CATEGORY_H

#include <string>

using namespace std;

class Category {
private:
    int id;
    string description;
    string subCategory;
public:
    static int counter;
    int getId() const;

    void setId(int id);

    const string &getDescription() const;

    void setDescription(const string &description);

    const string &getSubCategory() const;

    void setSubCategory(const string &subCategory);

};


#endif //UNTITLED_CATEGORY_H
