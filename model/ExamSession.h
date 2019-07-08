

#ifndef UNTITLED_EXAMSESSION_H
#define UNTITLED_EXAMSESSION_H

#include "User.h"
#include "Exam.h"

class ExamSession {
private:
    User user;
    Exam exam;
    Map<int,bool> answerHistory;
    int correctAnswers;
    bool finished;
public:
    const User &getUser() const;

    void setUser(const User &user);

    const Exam &getExam() const;

    void setExam(const Exam &exam);

    const Map<int, bool> &getAnswerHistory() const;

    void setAnswerHistory(const Map<int, bool> &answerHistory);

    int getCorrectAnswers() const;

    void setCorrectAnswers(int correctAnswers);

    bool isFinished() const;

    void setFinished(bool finished);

private:

    float getTotalPoints();
};


#endif //UNTITLED_EXAMSESSION_H
