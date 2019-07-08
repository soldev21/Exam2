//
//#include "Map.h"
//
//template<class K, class V>
//void Map<K, V>::put(K const &k, V const &v) {
//    reg.insert(pair<K, V>(k, v));
//}
//
//template<class K, class V>
//void Map<K, V>::remove(K const &k) {
//    reg.erase(k);
//}
//
//template<class K, class V>
//V * Map<K, V>::get(K const &k){
//    typename map<K, V>::iterator itr;
//    itr = reg.find(k);
//    if (itr == reg.end())
//        return NULL;
//    else
//        return &itr->second;
//}
//
//template<class K, class V>
//int Map<K, V>::size() {
//    return reg.size();
//}
//
//template<class K, class V>
//bool Map<K, V>::containsKey(K const &k) {
//    return reg.find(k) != reg.end();
//}
//
//
