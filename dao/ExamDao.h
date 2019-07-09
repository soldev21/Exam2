

#ifndef UNTITLED_EXAMDAO_H
#define UNTITLED_EXAMDAO_H

#include "../repository/ExamRepository.h"

using namespace std;

class ExamDao{
    static ExamDao *examDao;
    ExamRepository repository;
    ExamDao(){

    }
public:
    static ExamDao* getInstance(){
        if (!examDao) {
            examDao = new ExamDao;
        }
        return examDao;
    }
    ExamRepository &getRepository();


};


#endif //UNTITLED_EXAMDAO_H
