//
// Created by s.huseynli on 7/8/2019.
//

#ifndef UNTITLED_EXAMSESSIONREPOSITORY_H
#define UNTITLED_EXAMSESSIONREPOSITORY_H

#include "StandardRepository.h"
#include "../model/ExamSession.h"


class ExamSessionRepository: public StandardRepository<string,ExamSession> {
public:
    ExamSession *findByKey(const string &key);

    vector<ExamSession*>* findAll();

    void save(const ExamSession &u);

    void remove(const ExamSession &u);
};


#endif //UNTITLED_EXAMSESSIONREPOSITORY_H
