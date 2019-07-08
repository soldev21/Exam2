
#ifndef UNTITLED_REPOSITORY_H
#define UNTITLED_REPOSITORY_H

template <class K,class V>
class Repository{
public:
    virtual V* findByKey(K const&);
    virtual void save(V const&);
    virtual void remove(V const&);
};


#endif
