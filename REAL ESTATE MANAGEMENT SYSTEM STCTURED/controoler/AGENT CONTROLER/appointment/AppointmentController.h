#ifndef APPOINTMENT_CONTROLLER_H
#define APPOINTMENT_CONTROLLER_H

#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\VIEW\AGENT VIEW\APPOINTMENT\AppointmentView.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\DATA BASE\agent data base\appointment\AppointmentDB.h"

class AppointmentController {
private:
    AppointmentView view;
    AppointmentDB database;
public:
    void createAppointment();
    void cancelAppointment();
    void displayAppointments();
};

#endif
