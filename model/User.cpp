

#include "User.h"

const string &User::getUsername() const {
    return username;
}

void User::setUsername(const string &username) {
    User::username = username;
}

const string &User::getPassword() const {
    return password;
}

void User::setPassword(const string &password) {
    User::password = password;
}

const string &User::getName() const {
    return name;
}

void User::setName(const string &name) {
    User::name = name;
}

const string &User::getAddress() const {
    return address;
}

void User::setAddress(const string &address) {
    User::address = address;
}

const string &User::getPhone() const {
    return phone;
}

void User::setPhone(const string &phone) {
    User::phone = phone;
}

bool User::isAdmin() const {
    return admin;
}

void User::setAdmin(bool admin) {
    User::admin = admin;
}
