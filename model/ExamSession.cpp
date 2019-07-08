
#include "ExamSession.h"


float ExamSession::getTotalPoints(){
    float sum =0;
    for (map<int,bool>::iterator it = answerHistory.begin(); it!=answerHistory.end();++it){
        int p = exam.getQuestions().get(it->first)->getPoint();
        int c = exam.getQuestions().get(it->first)->getWrongCoefficent();
        if (it->second)  sum+=p; else sum-=p/c;
    }
    return sum;
}

const User &ExamSession::getUser() const {
    return user;
}

void ExamSession::setUser(const User &user) {
    ExamSession::user = user;
}

const Exam &ExamSession::getExam() const {
    return exam;
}

void ExamSession::setExam(const Exam &exam) {
    ExamSession::exam = exam;
}

const Map<int, bool> &ExamSession::getAnswerHistory() const {
    return answerHistory;
}

void ExamSession::setAnswerHistory(const Map<int, bool> &answerHistory) {
    ExamSession::answerHistory = answerHistory;
}

int ExamSession::getCorrectAnswers() const {
    return correctAnswers;
}

void ExamSession::setCorrectAnswers(int correctAnswers) {
    ExamSession::correctAnswers = correctAnswers;
}

bool ExamSession::isFinished() const {
    return finished;
}

void ExamSession::setFinished(bool finished) {
    ExamSession::finished = finished;
}
