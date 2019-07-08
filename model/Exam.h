//
// Created by s.huseynli on 7/8/2019.
//

#ifndef UNTITLED_EXAM_H
#define UNTITLED_EXAM_H

#include "Category.h"
#include "Question.h"

class Exam {
private:
    int maxQuestions;
    int questionCount;
    Category category;
    Map<int,Question> questions;
public:

    int getMaxQuestions() const;

    void setMaxQuestions(int maxQuestions);

    int getQuestionCount() const;

    void setQuestionCount(int questionCount);

    const Category &getCategory() const;

    void setCategory(const Category &category);

    Map<int, Question> &getQuestions() ;

    void setQuestions(const Map<int, Question> &questions);


    bool addQuestion(const Question &question);
};


#endif //UNTITLED_EXAM_H
