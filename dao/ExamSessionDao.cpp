
#include "ExamSessionDao.h"


ExamSessionRepository & ExamSessionDao::getRepository() {
    return repository;
}

ExamSessionDao *ExamSessionDao::examSessionDao1 = 0;