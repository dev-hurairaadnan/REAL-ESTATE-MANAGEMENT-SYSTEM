#ifndef APPOINTMENT_DB_H
#define APPOINTMENT_DB_H

#include <vector>
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\agent model\Appointment.h"
using namespace std;
class AppointmentDB {
private:
   string filename = "DATA FILES/appointments.csv";
public:
    bool addAppointment(const APPOINTMENT& appointment) const;
    std::vector<APPOINTMENT> getAllAppointments() const;
    bool deleteAppointment(const std::string& customerName, const std::string& day, const std::string& time) const;
};

#endif
