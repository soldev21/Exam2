#ifndef UNTITLED_ADMINMANAGEMENT_H
#define UNTITLED_ADMINMANAGEMENT_H

#include "../collections/Map.h"
#include "../model/User.h"
#include "../util/Utils.h"
#include "../core/AuthManagement.h"

struct Commands {
    const string C_P = "-cp";
    const string CR_U = "-cru";
    const string ED_U = "-edu";
    const string CR_CAT = "-crcat";
    const string CR_EX = "-crexam";
    const string EXIT = "-exit";
    const string HELP = "-help";
} C;

class AdminManagement {

    static Map<string, string> commands;
    static AdminManagement *management;
    User user;
    static void build();
    AdminManagement();

public:
    AdminManagement(User user);

    void start();

    void handleCommand(string command);

    void printCommand();

    static AdminManagement *getInstance(User user) {
        return new AdminManagement(user);

    }
};

Map<string, string> AdminManagement::commands = Map<string, string>();

void AdminManagement::build() {
    commands.put(C.C_P, "\"change password\"");
    commands.put(C.CR_U, "\"create user\"");
    commands.put(C.ED_U, "\"edit uer\"");
    commands.put(C.CR_CAT, "\"create category\"");
    commands.put(C.CR_EX, "\"create exam\"");
    commands.put(C.EXIT, "\"exit\"");
}



AdminManagement::AdminManagement() {
    AdminManagement::build();
}

AdminManagement::AdminManagement(User user) {
    AdminManagement::build();
    AdminManagement::user = user;
}

void AdminManagement::start() {
    string s;
    while ((s = Utils::read()) != C.EXIT) {
        handleCommand(s);
    }
}

void AdminManagement::printCommand() {
    for (map<string, string>::iterator it = commands.begin(); it != commands.end(); ++it) {
        Utils::writeln(it->first + " " + it->second);
    }
}

void AdminManagement::handleCommand(string const command) {
    if (!commands.containsKey(command)) {
        printCommand();
        return;
    }
    if (command == C.HELP) {
        printCommand();
        return;
    }

    if (command == C.C_P) {
        while (!Utils::changePassword(user)) {}
    } else if (command == C.CR_U) {
        AuthManagement::getInstance()->registerUser();
    } else if (command == C.ED_U) {
        Utils::editUser();
    } else if (command == C.CR_CAT) {
        Utils::createCategory();
    } else if (command == C.CR_EX) {
        Utils::createExam();

    }
}


#endif //UNTITLED_ADMINMANAGEMENT_H
