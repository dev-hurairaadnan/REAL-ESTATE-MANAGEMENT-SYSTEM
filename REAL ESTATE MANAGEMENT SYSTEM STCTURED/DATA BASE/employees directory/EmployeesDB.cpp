//
// Created by Dev.Huraira on 5/24/2025.
//

#include "EmployeesDB.h"
#include <sstream>

#include <algorithm>
#include <cctype>
#include <locale>

std::string trim(const std::string& s) {
    auto start = s.begin();
    while (start != s.end() && std::isspace(*start)) start++;

    auto end = s.end();
    do {
        end--;
    } while (std::distance(start, end) > 0 && std::isspace(*end));

    return std::string(start, end + 1);
}


EmployeesDB::EmployeesDB() {
}
void EmployeesDB::addEmployee(const Employees_model& e1) {
    ofstream file("DATA FILES/HR_RECORD.csv", ios::app);
    if (!file.is_open()) {
        cout << "Failed to open file" << endl;
    } else {
        file << e1. getEmployeeName()<< ","
             << e1.getPassword() << ","
             << e1.getRole() << ","
             << e1.getDepartment() << endl;
        cout << "Employee added successfully." << endl;
    }
    file.close();
}
void EmployeesDB::readEmployees() {
    ifstream file("DATA FILES/HR_RECORD.csv");
    if (!file.is_open()) {
        cout << "Failed to open file" << endl;
        return;
    }

    string line;
    cout << "Name\tPassword\tRole\tDepartment" << endl;
    while (getline(file, line)) {
        stringstream ss(line);
        string name, pass, role, dept;

        getline(ss, name, ',');
        getline(ss, pass, ',');
        getline(ss, role, ',');
        getline(ss, dept, ',');

        cout << name << "\t" << pass << "\t" << role << "\t" << dept << endl;
    }

    file.close();
}



void EmployeesDB::deleteEmployee(const string& targetName) {
    string name, role, dept, pass;
    vector<Employees_model> temp;
    ifstream file("DATA FILES/HR_RECORD.csv", ios::in);

    if (!file.is_open()) {
        cout << "Failed to open file" << endl;
        return;
    }

    string line;
    bool found = false;
    while (getline(file, line)) {
        stringstream ss(line);
        getline(ss, name, ',');
        getline(ss, pass, ',');
        getline(ss, role, ',');
        getline(ss, dept, ',');

        if (trim(name)  != trim(targetName)) {
            temp.push_back(Employees_model(name, pass, role, dept));
        } else {
            cout << "Employee with name " << targetName << " deleted." << endl;
            found = true;
        }
    }
    file.close();

    ofstream outfile("DATA FILES/HR_RECORD.csv", ios::out); // overwrite file
    for (auto& e : temp) {
        outfile << e.getEmployeeName() << ","
                << e.getPassword() << ","
                << e.getRole() << ","
                << e.getDepartment() << "\n";
    }
    outfile.close();

    if (!found) {
        cout << "No employee found with name: " << targetName << endl;
    }
}



void EmployeesDB::updateEmployee(const string& targetName, const string& newPass, const string& newRole, const string& newDept) {
    ifstream file("DATA FILES/HR_RECORD.csv");
    if (!file.is_open()) {
        cout << "Failed to open file for reading." << endl;
        return;
    }

    vector<Employees_model> temp;
    string line;
    bool found = false;

    while (getline(file, line)) {
        stringstream ss(line);
        string name, pass, role, dept;

        getline(ss, name, ',');
        getline(ss, pass, ',');
        getline(ss, role, ',');
        getline(ss, dept, '\n');

        if (trim(name) == trim(targetName)) {
            temp.emplace_back(name, newPass, newRole, newDept);
            found = true;
        } else {
            temp.emplace_back(name, pass, role, dept);
        }
    }
    file.close();

    if (!found) {
        cout << "Employee not found in update phase." << endl;
        return;
    }

    ofstream outfile("DATA FILES/HR_RECORD.csv", ios::trunc);
    if (!outfile.is_open()) {
        cout << "Failed to open file for writing." << endl;
        return;
    }

    for (const auto& e : temp) {
        outfile << e.getEmployeeName() << ","
                << e.getPassword() << ","
                << e.getRole() << ","
                << e.getDepartment() << endl;
    }

    outfile.close();
    cout << "Employee updated successfully." << endl;
}

bool EmployeesDB::employeeExists(const string& targetName) {
    ifstream file("DATA FILES/HR_RECORD.csv");
    if (!file.is_open()) {
        cout << "Error: Could not open file.\n";
        return false;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string name, pass, role, dept;

        getline(ss, name, ',');
        getline(ss, pass, ',');
        getline(ss, role, ',');
        getline(ss, dept, '\n');

        if (name == targetName) {
            file.close();
            return true;
        }
    }

    file.close();
    return false;
}

