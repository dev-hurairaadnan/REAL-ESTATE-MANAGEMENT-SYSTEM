#include "AppointmentController.h"
#include <iostream>

void AppointmentController::createAppointment() {
    APPOINTMENT appt = view.getAppointmentInput();
    if (database.addAppointment(appt)) {
        view.showMessage("Appointment added successfully.");
    } else {
        view.showMessage("Failed to add appointment.");
    }
}

void AppointmentController::cancelAppointment() {
    std::string customerName = view.getCustomerNameInput();
    std::string day = view.getDayInput();
    std::string time = view.getTimeInput();

    if (database.deleteAppointment(customerName, day, time)) {
        view.showMessage("Appointment canceled successfully.");
    } else {
        view.showMessage("Appointment not found.");
    }
}

void AppointmentController::displayAppointments() {
    std::vector<APPOINTMENT> appointments = database.getAllAppointments();
    view.showAppointments(appointments);
}
