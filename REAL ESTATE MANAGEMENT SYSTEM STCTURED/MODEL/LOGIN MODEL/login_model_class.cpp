#include "login_model_class.h"

// Constructors
login_model_class::login_model_class() {
    username = "";
    password = "";
    role = "";
}

login_model_class::login_model_class(string username, string password, string role,string department) {
    this->username = username;
    this->password = password;
    this->role = role;
    this->department = department;
}

string login_model_class::getUsername() {
    return username;
}
string login_model_class::getPassword() {
    return password;
}
string login_model_class::getRole() {
    return role;
}

void login_model_class::setUsername(string username) {
    this->username = username;
}
void login_model_class::setPassword(string password) {
    this->password = password;
}
void login_model_class::setRole(string role) {
    this->role = role;
}

void login_model_class::setDepartment(string department) {
    this->department = department;
}

string login_model_class::getDepartment() {
return department;
}
