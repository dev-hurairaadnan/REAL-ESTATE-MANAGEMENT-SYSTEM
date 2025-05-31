#ifndef EMPLOYEES_MODEL_H
#define EMPLOYEES_MODEL_H

#include <string>
using namespace std;

class Employees_model {
private:
    string employeeName ;
    string password;
    string role;
    string department;


public:
    Employees_model();
    Employees_model(string name, string pass, string role, string dept);

    string getEmployeeName()const;
    string getPassword()const;
    string getRole()const;
    string getDepartment()const;

    void setEmployeeName(string name);
    void setPassword(string pass);
    void setRole(string role);
    void setDepartment(string dept);
};

#endif
