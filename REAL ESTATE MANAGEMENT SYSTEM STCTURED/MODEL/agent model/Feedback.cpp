#include "Feedback.h"

Feedback::Feedback() {
    customerName = employeeName = department = remark = suggestion = "";
    points = 0;
}

Feedback::Feedback(string customerName, string employeeName, string department,
                   int points, string remark, string suggestion) {
    this->customerName = customerName;
    this->employeeName = employeeName;
    this->department = department;
    this->points = points;
    this->remark = remark;
    this->suggestion = suggestion;
}

string Feedback::getCustomerName() const {
    return customerName;
}
string Feedback::getEmployeeName() const {
    return employeeName;
}
string Feedback::getDepartment() const {
    return department;
}
int Feedback::getPoints() const { return points; }
string Feedback::getRemark() const {
    return remark;
}
string Feedback::getSuggestion() const {
    return suggestion;
}

void Feedback::setCustomerName(string val) {
    customerName = val;
}
void Feedback::setEmployeeName(string val) {
    employeeName = val;
}
void Feedback::setDepartment(string val) {
    department = val;
}
void Feedback::setPoints(int val) {
    points = val;
}
void Feedback::setRemark(string val) {
    remark = val;
}
void Feedback::setSuggestion(string val) {
    suggestion = val;
}
