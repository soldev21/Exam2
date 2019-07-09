

#ifndef UNTITLED_EXAM_H
#define UNTITLED_EXAM_H

#include "Category.h"
#include "Question.h"

class Exam {
private:
    int id;
public:
    int getId() const;

    void setId(int id);

private:
    int maxQuestions;
    int questionCount;
    string description;
public:
    static int counter;
    const string &getDescription() const;

    void setDescription(const string &description);

private:
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
