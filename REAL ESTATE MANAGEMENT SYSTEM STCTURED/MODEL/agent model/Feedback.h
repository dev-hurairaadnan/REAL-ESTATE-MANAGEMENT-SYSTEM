#ifndef FEEDBACK_H
#define FEEDBACK_H

#include <string>
using namespace std;

class Feedback {
    string customerName, employeeName, department, remark, suggestion;
    int points;

public:
    Feedback();
    Feedback(string customerName, string employeeName, string department,
             int points, string remark, string suggestion);

    string getCustomerName() const;
    string getEmployeeName() const;
    string getDepartment() const;
    int getPoints() const;
    string getRemark() const;
    string getSuggestion() const;

    void setCustomerName(string val);
    void setEmployeeName(string val);
    void setDepartment(string val);
    void setPoints(int val);
    void setRemark(string val);
    void setSuggestion(string val);
};

#endif
