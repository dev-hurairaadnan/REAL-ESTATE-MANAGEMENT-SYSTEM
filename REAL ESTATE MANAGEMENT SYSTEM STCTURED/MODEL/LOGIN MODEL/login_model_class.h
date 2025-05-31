#ifndef LOGIN_MODEL_CLASS_H
#define LOGIN_MODEL_CLASS_H

#include <string>
using namespace std;

class login_model_class {
private:
    string username;
    string password;
    string role;
    string department;

public:
    login_model_class();
    login_model_class(string username, string password, string role,string department);
    string getUsername();
    string getPassword();
    string getRole();
    void setUsername(string username);
    void setPassword(string password);
    void setRole(string role);
    void setDepartment(string department);
    string getDepartment();
};

#endif
