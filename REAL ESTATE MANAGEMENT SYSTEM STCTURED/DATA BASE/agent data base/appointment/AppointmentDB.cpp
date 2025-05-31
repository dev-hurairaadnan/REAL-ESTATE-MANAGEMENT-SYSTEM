#include "AppointmentDB.h"
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

bool AppointmentDB::addAppointment(const APPOINTMENT& appointment) const {
    ofstream file(filename, ios::app);
    if (!file.is_open()) {
        cout << "Failed to open file to save appointment." << endl;
        return false;
    }

    file << appointment.getCustomerName() << ","
         << appointment.getDay() << ","
         << appointment.getTimeOfVisit() << "\n";

    file.close();
    return true;
}

vector<APPOINTMENT> AppointmentDB::getAllAppointments() const {
    vector<APPOINTMENT> appointments;
    ifstream file(filename);
    if (!file.is_open()) {
        cout << "Failed to open file to load appointments." << endl;
        return appointments;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string customerName, day, time;

        getline(ss, customerName, ',');
        getline(ss, day, ',');
        getline(ss, time);

        // Directly add to vector
        appointments.emplace_back(customerName, day, time);
    }

    file.close();
    return appointments;
}
bool AppointmentDB::deleteAppointment(const string& customerName, const string& day, const string& time) const {
    vector<APPOINTMENT> appointments = getAllAppointments();
    ofstream file(filename, ios::trunc);
    if (!file.is_open()) {
        cout << "Failed to open file to delete appointment." << endl;
        return false;
    }

    bool deleted = false;
    for (const auto& appt : appointments) {
        if (appt.getCustomerName() == customerName &&
            appt.getDay() == day &&
            appt.getTimeOfVisit() == time) {
            deleted = true;
            continue;
            }

        file << appt.getCustomerName() << ","
             << appt.getDay() << ","
             << appt.getTimeOfVisit() << "\n";
    }

    file.close();
    if (deleted)
        cout << "Appointment successfully deleted.\n";
    else
        cout << "Appointment not found.\n";
    return deleted;
}