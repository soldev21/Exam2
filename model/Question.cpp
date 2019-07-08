#include "Question.h"

int Question::getKey() const {
    return key;
}

void Question::setKey(int key) {
    Question::key = key;
}

int Question::getId() const {
    return id;
}

void Question::setId(int id) {
    Question::id = id;
}

int Question::getMaxAnswerCount() const {
    return maxAnswerCount;
}

void Question::setMaxAnswerCount(int maxAnswerCount) {
    Question::maxAnswerCount = maxAnswerCount;
}

const string &Question::getDescription() const {
    return description;
}

void Question::setDescription(const string &description) {
    Question::description = description;
}

const Map<string, string> &Question::getPossibleAnswers() const {
    return possibleAnswers;
}

void Question::setPossibleAnswers(const Map<string, string> &possibleAnswers) {
    Question::possibleAnswers = possibleAnswers;
}

const string &Question::getCorrectAnswer() const {
    return correctAnswer;
}

int Question::getWrongCoefficent() const {
    return wrongCoefficent;
}

void Question::setWrongCoefficent(int wrongCoefficent) {
    Question::wrongCoefficent = wrongCoefficent;
}

int Question::getPoint() const {
    return point;
}

void Question::setPoint(int point) {
    Question::point = point;
}

Question::Question(int id, int maxAnswerCount) : id(id),maxAnswerCount(maxAnswerCount){
    key = 65;
}

string Question::addAnswer(string answer){
    if (possibleAnswers.size() == maxAnswerCount) return "\0";
    string a;
    a.push_back((char) key++);
    possibleAnswers.put(a,answer);
    return a;
}


void Question::removeAnswer(string key){
    possibleAnswers.remove(key);
    if (correctAnswer == key) correctAnswer = "\0";
}

bool Question::setCorrectAnswer(string correctAnswer){
    if (possibleAnswers.containsKey(correctAnswer))
        this->correctAnswer = correctAnswer; else return false;
    return true;
}


