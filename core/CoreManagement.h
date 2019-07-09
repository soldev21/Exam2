

#ifndef UNTITLED_COREMANAGEMENT_H
#define UNTITLED_COREMANAGEMENT_H

#include "../util/Utils.h"
#include "../core/AuthManagement.h"
#include "../core/AdminManagement.h"

class CoreManagement{
public:
    void start();

private:
    bool isContinue();
};

void CoreManagement::start() {
    User *user = AuthManagement::getInstance()->registerUser();
    bool isContinue = true;
    bool isContinue2;

    while (isContinue) {
        isContinue2 = true;
        if (user->isAdmin()) {
            AdminManagement *adminManagement = AdminManagement::getInstance(*user);
            adminManagement->start();
        } else {
//            UserManagement userManagement = new UserManagement(user);
//            userManagement.start();
        }

        while (isContinue2) {
            if (!CoreManagement::isContinue()) {
                isContinue = false;
                break;
            }
            user = AuthManagement::getInstance()->login();
            if (user != NULL) isContinue2 = false;
        }
    }
}

bool CoreManagement::isContinue() {
    Utils::write("Continue(c) or exit(e) ? ");
    string s;
    while ((s=Utils::read())!=("c") && s!=("e")){}
    return (s==("c")) ? true : false;
}
#endif //UNTITLED_COREMANAGEMENT_H
