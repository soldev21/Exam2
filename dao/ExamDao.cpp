

#include "ExamDao.h"


ExamRepository & ExamDao::getRepository(){
    return repository;
}

ExamDao *ExamDao::examDao = 0;