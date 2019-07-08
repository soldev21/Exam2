#ifndef USER
#define USER

#include <string>

using namespace std;

class User{
private:
    string username;
    string password;
    string name;
    string address;
    string phone;
    bool admin;
public:
    const string &getUsername() const {
        return username;
    }

    void setUsername(const string &username) {
        User::username = username;
    }

    const string &getPassword() const {
        return password;
    }

    void setPassword(const string &password) {
        User::password = password;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        User::name = name;
    }

    const string &getAddress() const {
        return address;
    }

    void setAddress(const string &address) {
        User::address = address;
    }

    const string &getPhone() const {
        return phone;
    }

    void setPhone(const string &phone) {
        User::phone = phone;
    }

    bool isAdmin() const {
        return admin;
    }

    void setAdmin(bool admin) {
        User::admin = admin;
    }
};

#endif