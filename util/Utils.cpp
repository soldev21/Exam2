
#include "Utils.h"
#include "../dao/UserDao.h"
#include "../model/Category.h"
#include "../model/Exam.h"
#include "../dao/CategoryDao.h"


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
    CategoryDao::getInstance()->getRepository().save(*category);
}

void Utils::createExam(){
    Exam *exam = new Exam();
    Utils::write("Enter max question: ");
    exam->setMaxQuestions(atoi (Utils::read().c_str()));
    Utils::writeln("Choose category");
    vector<Category*> * vector1 = CategoryDao::getInstance()->getRepository().findAll();
    for(vector<Category*>::iterator itr = vector1->begin();itr!=vector1->end();++itr){
        Utils::write((*itr)->getDescription());
    }
    exam->setCategory(*CategoryDao::getInstance()->getRepository().findByKey(atoi(Utils::read().c_str())));
//    ExamDao::.examRepository.save(exam);
}