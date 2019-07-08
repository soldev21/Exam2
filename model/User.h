//
// Created by s.huseynli on 7/8/2019.
//

#ifndef UNTITLED_USER_H
#define UNTITLED_USER_H

#include <string>

using namespace std;

class User {
private:
    string username;
    string password;
    string name;
    string address;
    string phone;
    bool admin;
public:
    const string &getUsername() const;

    void setUsername(const string &username);

    const string &getPassword() const;

    void setPassword(const string &password);

    const string &getName() const;

    void setName(const string &name);

    const string &getAddress() const;

    void setAddress(const string &address);

    const string &getPhone() const;

    void setPhone(const string &phone);

    bool isAdmin() const;

    void setAdmin(bool admin);

};


#endif //UNTITLED_USER_H
