

#ifndef UNTITLED_USERMANAGEMENT_H
#define UNTITLED_USERMANAGEMENT_H

#include "../collections/Map.h"
#include "../model/User.h"
#include "../util/Utils.h"

struct UserCommands {
    const string C_P = "-cp";
    const string SHOW_EXAMS = "-lexam";
    const string EXIT = "-exit";
    const string HELP = "-help";
} UC;

class UserManagement {

    static Map<string, string> commands;
    User user;
    static void build();
    UserManagement();

public:
    UserManagement(User const&user);

    void start();

    void handleCommand(string command);

    void printCommand();

    static UserManagement *getInstance(User const&user) {
        return new UserManagement(user);

    }
};

Map<string, string> UserManagement::commands = Map<string, string>();

void UserManagement::build() {
    commands.put(UC.C_P, "\"change password\"");
    commands.put(UC.SHOW_EXAMS, "\"show available exams\"");
    commands.put(UC.EXIT, "\"exit\"");
}



UserManagement::UserManagement() {
    UserManagement::build();
}

UserManagement::UserManagement(User const&user) {
    UserManagement::build();
    UserManagement::user = user;
}

void UserManagement::start() {
    string s;
    while ((s = Utils::read()) != UC.EXIT) {
        handleCommand(s);
    }
}

void UserManagement::printCommand() {
    for (map<string, string>::iterator it = commands.begin(); it != commands.end(); ++it) {
        Utils::writeln(it->first + " " + it->second);
    }
}

void UserManagement::handleCommand(string const command) {
    if (!commands.containsKey(command)) {
        printCommand();
        return;
    }
    if (command == UC.HELP) {
        printCommand();
        return;
    }

    if (command == UC.C_P) {
        while (!Utils::changePassword(user)) {}
    } else if (command == UC.SHOW_EXAMS){
        Utils::showExams();
    }
}

#endif //UNTITLED_USERMANAGEMENT_H
