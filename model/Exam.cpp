#ifndef EXAM
#define EXAM

#include "Category.cpp"
#include "Question.cpp"
#include "../collections/Map.cpp"


class Exam{
private:
    int maxQuestions;
    int questionCount;
    Category category;
    Map<int,Question> questions;
public:
    int getMaxQuestions() const {
        return maxQuestions;
    }

    void setMaxQuestions(int maxQuestions) {
        Exam::maxQuestions = maxQuestions;
    }

    int getQuestionCount() const {
        return questionCount;
    }

    void setQuestionCount(int questionCount) {
        Exam::questionCount = questionCount;
    }

    const Category &getCategory() const {
        return category;
    }

    void setCategory(const Category &category) {
        Exam::category = category;
    }

    Map<int, Question> &getQuestions() {
        return questions;
    }

    void setQuestions(const Map<int, Question> &questions) {
        Exam::questions = questions;
    }
    bool addQuestion(Question const& question){
        if (maxQuestions == questions.size()) return false;
        questions.put(++questionCount,question);
        return true;
    }
};

#endif