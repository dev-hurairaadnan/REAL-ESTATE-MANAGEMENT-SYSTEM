#include "AppointmentView.h"
#include <iostream>
#include <string>
#include <limits>

using namespace std;

APPOINTMENT AppointmentView::getAppointmentInput() {
    APPOINTMENT appt;
    string name, day, time;

    cout << "Enter customer full name: ";
    cin.ignore();
    getline(cin, name);
    appt.setCustomerName(name);

    cout << "Enter day of visit: ";
    getline(cin, day);
    appt.setDay(day);

    cout << "Enter time of visit: ";
    getline(cin, time);
    appt.setTimeOfVisit(time);

    return appt;
}

string AppointmentView::getCustomerNameInput() {
    string name;
    cout << "Enter customer full name to cancel appointment: ";


    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    getline(cin, name);
    return name;
}

string AppointmentView::getDayInput() {
    string day;
    cout << "Enter day of appointment: ";
    getline(cin, day);
    return day;
}

string AppointmentView::getTimeInput() {
    string time;
    cout << "Enter time of appointment: ";
    getline(cin, time);
    return time;
}

void AppointmentView::showAppointments(const vector<APPOINTMENT>& appointments) {
    if (appointments.empty()) {
        cout << "\nNo appointments found.\n";
        return;
    }

    cout << "\n=== All Appointments ===\n";
    for (const auto& appt : appointments) {
        cout << "Customer Name : " << appt.getCustomerName() << "\n"
             << "Day           : " << appt.getDay() << "\n"
             << "Time          : " << appt.getTimeOfVisit() << "\n"
             << "-------------------------------\n";
    }
}

void AppointmentView::showMessage(const string& message) {
    cout << message << endl;
}
