

#include "ExamRepository.h"


Exam* ExamRepository::findByKey(int const& key) {
    return registry.get(key);
}
void ExamRepository::save(Exam const& u){
    registry.put(u.getId(),u);
}
void ExamRepository::remove(Exam const& u){
    registry.remove(u.getId());
}

vector<Exam*>* ExamRepository::findAll(){
    vector<Exam*> *vector1 = new vector<Exam*>();
    for (map<int,Exam>::iterator it = registry.begin(); it!=registry.end();++it){
        vector1->push_back(&it->second);
    }
    return vector1;
}