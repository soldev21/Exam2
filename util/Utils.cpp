#ifndef UTILS
#define UTILS

#include <string>
#include "sha256.h"

using namespace std;

class Utils{
public :
    static string getHashed(string s){
        return sha256(s);
    }
};

#endif