#ifndef EMPLOYEES_CONTROLLER_H
#define EMPLOYEES_CONTROLLER_H

#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\DATA BASE\employees directory\EmployeesDB.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\Employees model\Employees_model.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\VIEW\employees view\employees_view_class.h"
#include <string>

class EmployeesController {
public:
    void directorAddEmployee(const std::string& department);
    void ceoAddDirector();

    void deleteEmployee();

    void updateEmployee();

    void viewAllEmployees();
};

#endif
