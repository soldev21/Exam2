
#include "Utils.h"
#include "../dao/UserDao.h"


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
    if (!s.empty()) user.setPassword(getHashed(s)); else {
        writeln("Password unsuccessfully changed");
        return false;
    };
    UserDao::getInstance()->getRepository().save(user);
    writeln("Password successfully changed");
    return true;
}

void Utils::editUser(){

}