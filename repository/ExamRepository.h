

#ifndef UNTITLED_EXAMREPOSITORY_H
#define UNTITLED_EXAMREPOSITORY_H

#include "StandardRepository.h"
#include "../model/Exam.h"

class ExamRepository: public StandardRepository<int,Exam> {
public:
    Exam *findByKey(const int &key);

    vector<Exam*>* findAll();

    void save(const Exam &u);

    void remove(const Exam &u);
};



#endif //UNTITLED_EXAMREPOSITORY_H
