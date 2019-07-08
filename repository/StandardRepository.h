

#ifndef UNTITLED_STANDARDREPOSITORY_H
#define UNTITLED_STANDARDREPOSITORY_H

#include <vector>
#include "../collections/Map.h"

template <class K,class V>
class StandardRepository /*: public Repository<K,V>*/{
public:
    virtual V* findByKey(K const&) = 0;
    virtual vector<V*>* findAll() = 0;
    virtual void save(V const&) = 0;
    virtual void remove(V const&) = 0;
protected:
    Map<K,V> registry;
};

#endif //UNTITLED_STANDARDREPOSITORY_H
