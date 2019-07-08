#ifndef QUESTION
#define QUESTION

#include <sstream>
#include "../collections/Map.cpp"

using namespace std;

class Question{
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
    int getId() const {
        return id;
    }

    void setId(int id) {
        Question::id = id;
    }

    int getMaxAnswerCount() const {
        return maxAnswerCount;
    }

    void setMaxAnswerCount(int maxAnswerCount) {
        Question::maxAnswerCount = maxAnswerCount;
    }

    const string &getDescription() const {
        return description;
    }

    void setDescription(const string &description) {
        Question::description = description;
    }

    const Map<string, string> &getPossibleAnswers() const {
        return possibleAnswers;
    }

    void setPossibleAnswers(const Map<string, string> &possibleAnswers) {
        Question::possibleAnswers = possibleAnswers;
    }

    int getWrongCoefficent() const {
        return wrongCoefficent;
    }

    void setWrongCoefficent(int wrongCoefficent) {
        Question::wrongCoefficent = wrongCoefficent;
    }
    const string &getCorrectAnswer() const {
        return correctAnswer;
    }
    int getPoint() const {
        return point;
    }

    void setPoint(int point) {
        Question::point = point;
    }



public:
    Question(int id, int maxAnswerCount) : id(id),maxAnswerCount(maxAnswerCount){
        key = 65;
    }

    string addAnswer(string answer){
        if (possibleAnswers.size() == maxAnswerCount) return "\0";
        string a;
        a.push_back((char) key++);
        possibleAnswers.put(a,answer);
        return a;
    }


    void removeAnswer(string key){
        possibleAnswers.remove(key);
        if (correctAnswer == key) correctAnswer = "\0";
    }

    bool setCorrectAnswer(string correctAnswer){
        if (possibleAnswers.containsKey(correctAnswer))
            this->correctAnswer = correctAnswer; else return false;
        return true;
    }

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


#endif
