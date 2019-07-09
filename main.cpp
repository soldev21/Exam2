#include <iostream>

#include "util/Utils.h"
#include "model/Question.h"
#include "model/AuthResponse.h"
#include "auth/Authentication.h"
#include "dao/UserDao.h"
#include "core/CoreManagement.h"
#include <string>
#include <map>

using namespace std;


int main() {
    CoreManagement coreManagement;
    coreManagement.start();
    return 0;
}



