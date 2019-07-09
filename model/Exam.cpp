
#include "Exam.h"

int Exam::getMaxQuestions() const {
    return maxQuestions;
}

void Exam::setMaxQuestions(int maxQuestions) {
    Exam::maxQuestions = maxQuestions;
}

int Exam::getQuestionCount() const {
    return questionCount;
}

void Exam::setQuestionCount(int questionCount) {
    Exam::questionCount = questionCount;
}

const Category &Exam::getCategory() const {
    return category;
}

void Exam::setCategory(const Category &category) {
    Exam::category = category;
}

Map<int, Question> &Exam::getQuestions() {
    return questions;
}

void Exam::setQuestions(const Map<int, Question> &questions) {
    Exam::questions = questions;
}

bool Exam::addQuestion(Question const& question){
    if (maxQuestions == questions.size()) return false;
    questions.put(++questionCount,question);
    return true;
}
