//
// Created by s.huseynli on 7/8/2019.
//

#ifndef UNTITLED_UTILS_H
#define UNTITLED_UTILS_H

#include <string>
#include <iostream>
#include "sha256.h"
#include "../model/User.h"

using namespace std;

class Utils {
public:
    static string getHashed(string s);
    static string read();
    static void write(string s);

    static void writeln(string s);
    static bool changePassword(User user);

    static void editUser();
};


#endif //UNTITLED_UTILS_H
