#include "customer_details_data_base_class.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;
#include "customer_details_data_base_class.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <vector>
using namespace std;

void customer_details_data_base_class::add_customer(CUSTOMER_DETAILS& C) {
    ofstream file("DATA FILES/Customer details.csv", ios::app);
    if (!file) {
        cout << "Failed to open file." << endl;
        return;
    }

    file << C.getName() << "," << C.getContactNo() << "," << C.getArea() << "," << C.getLandType() << "\n";
    file.close();
    cout << "Customer details successfully added." << endl;
}

void customer_details_data_base_class::remove_customer(string& target_name) {
    ifstream file("DATA FILES/Customer details.csv");
    if (!file) {
        cout << "Failed to open file." << endl;
        return;
    }

    vector<CUSTOMER_DETAILS> customer_list;
    string line;
    bool found = false;

    while (getline(file, line)) {
        stringstream ss(line);
        string name, contactStr, areaStr, landType;

        getline(ss, name, ',');
        getline(ss, contactStr, ',');
        getline(ss, areaStr, ',');
        getline(ss, landType);

        int contact = stoi(contactStr);
        int area = stoi(areaStr);

        if (name != target_name) {
            customer_list.push_back(CUSTOMER_DETAILS(name, contact, landType, area));
        } else {
            cout << "Customer with name \"" << target_name << "\" found and deleted." << endl;
            found = true;
        }
    }
    file.close();

    if (!found) {
        cout << "Customer with name \"" << target_name << "\" not found." << endl;
        return;
    }

    ofstream out("DATA FILES/Customer details.csv", ios::trunc);
    if (!out) {
        cout << "Failed to open file." << endl;
        return;
    }

    for (const auto& c : customer_list) {
        out << c.getName() << "," << c.getContactNo() << "," << c.getArea() << "," << c.getLandType() << "\n";
    }
    out.close();
}

void customer_details_data_base_class::update_customer(string target_name, int new_contact_no, string new_land_type, int new_area) {
    ifstream file("DATA FILES/Customer details.csv");
    if (!file) {
        cout << "Failed to open file." << endl;
        return;
    }

    vector<CUSTOMER_DETAILS> customer_list;
    string line;
    bool found = false;

    while (getline(file, line)) {
        stringstream ss(line);
        string name, contactStr, areaStr, landType;

        getline(ss, name, ',');
        getline(ss, contactStr, ',');
        getline(ss, areaStr, ',');
        getline(ss, landType);

        int contact = stoi(contactStr);
        int area = stoi(areaStr);

        customer_list.push_back(CUSTOMER_DETAILS(name, contact, landType, area));
    }
    file.close();

    for (auto& c : customer_list) {
        if (c.getName() == target_name) {
            c.setContactNo(new_contact_no);
            c.setLandType(new_land_type);
            c.setArea(new_area);
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Customer with name \"" << target_name << "\" not found." << endl;
        return;
    }

    ofstream out("DATA FILES/Customer details.csv", ios::trunc);
    if (!out) {
        cout << "Failed to open file." << endl;
        return;
    }

    for (const auto& c : customer_list) {
        out << c.getName() << "," << c.getContactNo() << "," << c.getArea() << "," << c.getLandType() << "\n";
    }
    out.close();

    cout << "Customer details updated successfully." << endl;
}

void customer_details_data_base_class::view_customer() {
    ifstream file("DATA FILES/Customer details.csv");
    if (!file) {
        cout << "Failed to open file." << endl;
        return;
    }

    cout << "Name\t\tContactNo\tArea\tLand Type" << endl;
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string name, contactStr, areaStr, landType;

        getline(ss, name, ',');
        getline(ss, contactStr, ',');
        getline(ss, areaStr, ',');
        getline(ss, landType);

        cout << name << "\t" << contactStr << "\t\t" << areaStr << "\t" << landType << endl;
    }

    file.close();
}
