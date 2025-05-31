//
// Created by Dev.Huraira on 5/25/2025.
//

#include "EmployeesController.h"
#include "EmployeesController.h"

void EmployeesController::directorAddEmployee(const std::string& department) {
    employees_view_class view;
    EmployeesDB db;
    Employees_model emp;
    std::string name, role, dept;
    string  pass;

    if (department == "Agent") {
        view.input_agent_EmployeeDetails(name, pass, role, dept);
    } else if (department == "Accounts") {
        view.input_finance_EmployeeDetails(name, pass, role, dept);
    } else if (department == "Operation") {
        view.input_operation_EmployeeDetails(name, pass, role, dept);
    } else {
        // Invalid department should ideally be handled in view/controller caller
        return;
    }

    emp.setEmployeeName(name);
    emp.setPassword(pass);
    emp.setRole(role);
    emp.setDepartment(dept);
    db.addEmployee(emp);
}

void EmployeesController::ceoAddDirector() {
    employees_view_class view;
    EmployeesDB db;
    Employees_model dir;
    std::string name, role, dept;
   std:: string pass;

    view.input_DIRECTORDetails(name, pass, role, dept);

    dir.setEmployeeName(name);
    dir.setPassword(pass);
    dir.setRole("director");
    dir.setDepartment(dept);
    db.addEmployee(dir);
}

void EmployeesController::deleteEmployee() {
    employees_view_class view;
    EmployeesDB db;

    // Take name input from the user using the view method
    string nameToDelete = view.seachbyname();

    // Now delete from the DB
    db.deleteEmployee(nameToDelete);
}

void EmployeesController::updateEmployee() {
    employees_view_class view;
    EmployeesDB db;
    string nameToUpdate = view.seachbyname();

    if (!db.employeeExists(nameToUpdate)) {
        cout << "Employee with name \"" << nameToUpdate << "\" not found." << endl;
        return;
    }

    string newPass = view.getNewPassword();
    string newRole = view.getNewRole();
    string newDept = view.getNewDepartment();

    // Step 4: Update in DB
    db.updateEmployee(nameToUpdate, newPass, newRole, newDept);
}


void EmployeesController::viewAllEmployees() {
    EmployeesDB db;
    db.readEmployees();
}
