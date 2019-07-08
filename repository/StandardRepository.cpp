#ifndef STANDARD_REPO
#define STANDARD_REPO

#include "Repository.h"
#include "../collections/Map.cpp"

template <class K,class V>
class StandardRepository : public Repository<K,V>{
protected:
    Map<K,V> registry;
};

#endif