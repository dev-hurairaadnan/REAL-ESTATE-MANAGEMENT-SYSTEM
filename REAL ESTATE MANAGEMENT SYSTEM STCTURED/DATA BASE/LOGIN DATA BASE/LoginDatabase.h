#ifndef LOGINDATABASE_H
#define LOGINDATABASE_H
#include <string>
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\LOGIN MODEL\login_model_class.h"
using namespace std;

class LoginDatabase {
public:
    bool validateUser(string username, string password, login_model_class &loginModel);
};

#endif
