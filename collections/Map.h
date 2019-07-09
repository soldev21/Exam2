
#ifndef UNTITLED_MAP_H
#define UNTITLED_MAP_H

#include <map>

using namespace std;


template<class K, class V>
class Map {
public:
    virtual void put(K const &, V const &);

    virtual V * get(K const &);

    virtual void remove(K const &);

    virtual int size();

    virtual bool containsKey(K const &);

    typename map<K, V>::iterator begin() {
        return reg.begin();
    }

    typename map<K, V>::iterator end() {
        return reg.end();
    }


private:
    map<K, V> reg;
};


template<class K, class V>
void Map<K, V>::put(K const &k, V const &v) {
    typename map<K,V>::iterator it = reg.find(k);
    if (it!=reg.end()){
        it->second = v;
    } else{
        reg.insert(make_pair(k,v));
    }
}

template<class K, class V>
void Map<K, V>::remove(K const &k) {
    reg.erase(k);
}

template<class K, class V>
V * Map<K, V>::get(K const &k){
    typename map<K, V>::iterator itr;
    itr = reg.find(k);
    if (itr == reg.end())
        return NULL;
    else
        return &itr->second;
}

template<class K, class V>
int Map<K, V>::size() {
    return reg.size();
}

template<class K, class V>
bool Map<K, V>::containsKey(K const &k) {
    return reg.find(k) != reg.end();
}
#endif //UNTITLED_MAP_H
