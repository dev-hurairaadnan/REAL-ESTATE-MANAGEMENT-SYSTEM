#ifndef LOGINVIEW_H
#define LOGINVIEW_H

#include <string>
using namespace std;

class LoginView {
public:
void getLoginInput(string &username, string &password,string &role,string &dep);
    void showLoginResult(bool success, string role);
};

#endif
