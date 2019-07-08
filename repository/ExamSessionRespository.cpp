#ifndef EXAM_SESSION_REPO
#define EXAM_SESSION_REPO

#include "StandardRepository.cpp"
#include "../model/ExamSession.cpp"

class ExamSessionRepository : public StandardRepository<string,ExamSession> {

public:
    ExamSession* findByKey(string const& key) {
        return registry.get(key);
    }
    void save(ExamSession const& u){
        registry.put(u.getUser().getUsername(),u);
    }
    void remove(ExamSession const& u){
        registry.remove(u.getUser().getUsername());
    }

};

#endif