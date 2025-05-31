#include "APPOINTMENT.h"


APPOINTMENT::APPOINTMENT() {
    customerName = "";
    timeOfVisit = "";
    day = "";
}


APPOINTMENT::APPOINTMENT(string name, string time, string day) {
    customerName = name;
    timeOfVisit = time;
    this->day = day;
}


void APPOINTMENT::setCustomerName(string name) {
    customerName = name;
}

void APPOINTMENT::setTimeOfVisit(string time) {
    timeOfVisit = time;
}

void APPOINTMENT::setDay(string d) {
    day = d;
}


string APPOINTMENT::getCustomerName() const {
    return customerName;
}

string APPOINTMENT::getTimeOfVisit() const {
    return timeOfVisit;
}

string APPOINTMENT::getDay() const {
    return day;
}
