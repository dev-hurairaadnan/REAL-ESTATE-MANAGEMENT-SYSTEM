#include "Employees_model.h"

Employees_model::Employees_model() {
    employeeName = "";
    password = "";
    role = "";
    department = "";
}

Employees_model::Employees_model(string name, string pass, string role, string dept) {
    this->employeeName = name;
    this->password = pass;
    this->role = role;
    this->department = dept;
}

string Employees_model::getEmployeeName() const{
    return employeeName;
}

string Employees_model::getPassword() const{
    return password;
}

string Employees_model::getRole()const {
    return role;
}

string Employees_model::getDepartment()const {
    return department;
}

void Employees_model::setEmployeeName(string name) {
    this->employeeName = name;
}

void Employees_model::setPassword(string pass) {
    this->password = pass;
}

void Employees_model::setRole(string role) {
    this->role = role;
}

void Employees_model::setDepartment(string dept) {
    this->department = dept;
}
