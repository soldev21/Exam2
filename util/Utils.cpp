
#include "Utils.h"
#include "../dao/UserDao.h"
#include "../model/Category.h"
#include "../model/Exam.h"
#include "../dao/CategoryDao.h"
#include "../dao/ExamDao.h"
#include <sstream>

using namespace std;

string Utils::getHashed(string s){
    return sha256(s);
}

string Utils::read() {
    string a;
    cin>>a;
    return a;
}

void Utils::write(string s){
    cout<<s;
}

void Utils::writeln(string s){
    cout<<s<<endl;
}

bool Utils::changePassword(User user){
    write("Please enter new password: ");
    string s  = read();
    if (!s.empty() && s!="\n") user.setPassword(getHashed(s)); else {
        writeln("Password change unsuccessfully completed!");
        return false;
    };
    UserDao::getInstance()->getRepository().save(user);
    writeln("Password successfully changed");
    return true;
}

void Utils::editUser(){

}

void Utils::createCategory(){
    Category *category = new Category();
    write("Enter category name: ");
    category->setDescription(read());
    write("Enter sub category name: ");
    category->setSubCategory(read());
    category->setId(++Category::counter);
    CategoryDao::getInstance()->getRepository().save(*category);
    writeln("Category successfully created");
}

void Utils::createExam(){
    Exam *exam = new Exam();
    Utils::write("Enter max question: ");
    exam->setMaxQuestions(atoi (Utils::read().c_str()));
    Utils::write("Enter description: ");
    exam->setDescription(Utils::read());
    Category *category=0;
    Utils::writeln("Choose category: ");
    vector<Category*> * vector1 = CategoryDao::getInstance()->getRepository().findAll();
    while (!category) {
        for (vector<Category *>::iterator itr = vector1->begin(); itr != vector1->end(); ++itr) {
            stringstream s;
            s << (*itr)->getId() << ". " << (*itr)->getDescription();
            Utils::writeln(s.str());
        }
        category = CategoryDao::getInstance()->getRepository().findByKey(atoi(Utils::read().c_str()));

        if (category) {
            exam->setId(++Exam::counter);
            exam->setCategory(*category);
            ExamDao::getInstance()->getRepository().save(*exam);
            Utils::writeln("Exam successfully created!");
        } else {
            Utils::writeln("Please enter correct category number!");
        }
    }

}

void Utils::showExams() {
    vector<Exam*> * vector1 = ExamDao::getInstance()->getRepository().findAll();
    for (vector<Exam *>::iterator itr = vector1->begin(); itr != vector1->end(); ++itr) {
        stringstream s;
        s << (*itr)->getId() << ". " << (*itr)->getDescription();
        Utils::writeln(s.str());
    }
}