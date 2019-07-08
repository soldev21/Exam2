
#ifndef UNTITLED_QUESTION_H
#define UNTITLED_QUESTION_H

using namespace std;

#include <string>
#include <sstream>
#include "../collections/Map.h"

class Question {
private:
    int key;
    int id;
    int maxAnswerCount;
    string description;
    Map<string,string> possibleAnswers;
    string correctAnswer;
    int wrongCoefficent;
    int point;

public:
    int getKey() const;

    void setKey(int key);

    int getId() const;

    void setId(int id);

    int getMaxAnswerCount() const;

    void setMaxAnswerCount(int maxAnswerCount);

    const string &getDescription() const;

    void setDescription(const string &description);

    const Map<string, string> &getPossibleAnswers() const;

    void setPossibleAnswers(const Map<string, string> &possibleAnswers);

    const string &getCorrectAnswer() const;

    int getWrongCoefficent() const;

    void setWrongCoefficent(int wrongCoefficent);

    int getPoint() const;

    void setPoint(int point);

    Question(int id, int maxAnswerCount);

    void removeAnswer(string key);

    bool setCorrectAnswer(string correctAnswer);

    string addAnswer(string answer);

    friend ostream &operator << (ostream & o,Question & q){
        stringstream s;
        s<< "Question "<< q.id << ": \n" << q.description << "\n";
        for (map<string,string>::iterator it = q.possibleAnswers.begin(); it!=q.possibleAnswers.end(); ++it){
            s<< it->first<< ") " << it->second << "\n";
        }
        o<<s.str();
        return o;
    }
};


#endif //UNTITLED_QUESTION_H
