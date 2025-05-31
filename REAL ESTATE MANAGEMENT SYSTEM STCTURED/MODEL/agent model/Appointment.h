#ifndef APPOINTMENT_H
#define APPOINTMENT_H

#include <string>
using namespace std;

class APPOINTMENT {
private:
    string customerName;
    string timeOfVisit;
    string day;

public:
    APPOINTMENT();
    APPOINTMENT(string name, string time, string day);

    void setCustomerName(string name);
    void setTimeOfVisit(string time);
    void setDay(string day);
    string getCustomerName() const;
    string getTimeOfVisit() const;
    string getDay() const;
};

#endif
