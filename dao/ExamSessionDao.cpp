//
// Created by s.huseynli on 7/8/2019.
//

#include "ExamSessionDao.h"


ExamSessionRepository & ExamSessionDao::getRepository() {
    return repository;
}

ExamSessionDao *ExamSessionDao::examSessionDao1 = 0;