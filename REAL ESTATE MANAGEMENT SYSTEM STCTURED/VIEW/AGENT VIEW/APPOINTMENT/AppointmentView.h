#ifndef APPOINTMENT_VIEW_H
#define APPOINTMENT_VIEW_H

#include <string>
#include <vector>
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\agent model\Appointment.h"

class AppointmentView {
public:
    APPOINTMENT getAppointmentInput();
    std::string getCustomerNameInput();
    std::string getDayInput();
    std::string getTimeInput();
    void showAppointments(const std::vector<APPOINTMENT>& appointments);
    void showMessage(const std::string& message);
};

#endif // APPOINTMENT_VIEW_H
