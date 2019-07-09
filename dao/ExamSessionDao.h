

#ifndef UNTITLED_EXAMSESSIONDAO_H
#define UNTITLED_EXAMSESSIONDAO_H

#include "../repository/ExamSessionRepository.h"


class ExamSessionDao{
    static ExamSessionDao *examSessionDao1;
    ExamSessionRepository repository;
    ExamSessionDao(){

    }
public:
    static ExamSessionDao* getInstance(){
        if (!examSessionDao1) {
            examSessionDao1 = new ExamSessionDao;
        }
        return examSessionDao1;
    }
    ExamSessionRepository &getRepository();


};


#endif //UNTITLED_EXAMSESSIONDAO_H
