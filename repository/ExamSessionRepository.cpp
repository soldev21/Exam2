//
// Created by s.huseynli on 7/8/2019.
//

#include "ExamSessionRepository.h"

ExamSession* ExamSessionRepository::findByKey(string const& key) {
    return registry.get(key);
}
void ExamSessionRepository::save(ExamSession const& u){
    registry.put(u.getUser().getUsername(),u);
}
void ExamSessionRepository::remove(ExamSession const& u){
    registry.remove(u.getUser().getUsername());
}