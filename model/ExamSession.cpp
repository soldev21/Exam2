#ifndef EXAM_SESSION
#define EXAM_SESSION


#include "User.cpp"
#include "Exam.cpp"

class ExamSession {
private:
    User user;
    Exam exam;
    Map<int,bool> answerHistory;
    int correctAnswers;
    bool finished;
public:
    const User &getUser() const {
        return user;
    }

    void setUser(const User &user) {
        ExamSession::user = user;
    }

    const Exam &getExam() const {
        return exam;
    }

    void setExam(const Exam &exam) {
        ExamSession::exam = exam;
    }

    const Map<int, bool> &getAnswerHistory() const {
        return answerHistory;
    }

    void setAnswerHistory(const Map<int, bool> &answerHistory) {
        ExamSession::answerHistory = answerHistory;
    }

    int getCorrectAnswers() const {
        return correctAnswers;
    }

    void setCorrectAnswers(int correctAnswers) {
        ExamSession::correctAnswers = correctAnswers;
    }

    bool isFinished() const {
        return finished;
    }

    void setFinished(bool finished) {
        ExamSession::finished = finished;
    }


public:
    float getTotalPoints(){
        float sum =0;
        for (map<int,bool>::iterator it = answerHistory.begin(); it!=answerHistory.end();++it){
            int p = exam.getQuestions().get(it->first)->getPoint();
            int c = exam.getQuestions().get(it->first)->getWrongCoefficent();
            if (it->second)  sum+=p; else sum-=p/c;
        }
        return sum;
    }
};


#endif