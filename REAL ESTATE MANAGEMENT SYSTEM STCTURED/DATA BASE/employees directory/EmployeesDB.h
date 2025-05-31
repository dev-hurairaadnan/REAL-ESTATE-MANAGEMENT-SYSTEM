//
// Created by Dev.Huraira on 5/24/2025.
//
//
// Created by Dev.Huraira on 5/24/2025.
//

#ifndef EMPLOYEES_DB_H
#define EMPLOYEES_DB_H

#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\Employees model\Employees_model.h"
#include <fstream>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class EmployeesDB {
private:
    vector<Employees_model> employees;

public:
    EmployeesDB(); // Constructor

    void addEmployee(const Employees_model& e1);
    void readEmployees();
    void deleteEmployee(const string& targetName);
   void  updateEmployee(const string& targetName, const string& newPass, const string& newRole, const string& newDept);

    bool employeeExists(const string &nameToCheck);
};

#endif // EMPLOYEES_DB_H
