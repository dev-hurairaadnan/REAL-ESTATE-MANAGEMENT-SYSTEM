//
// Created by Dev.Huraira on 5/21/2025.
//

#include "property_details_data_base_class.h"

#include <iosfwd>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;

void property_details_data_base_class::add_details(PROPERTY_DETAILS &p1) {
    ofstream file("DATA FILES/Available properties.csv", ios::app);
    if (!file) {
        cout << "failed to open file" << endl;
        return;
    }
    file << p1.getPropertyID() << "," << p1.getArea() << "," << p1.getLandType() << "\n";
    cout << "Property details are successfully added" << endl;
    file.close();
}

void property_details_data_base_class::delete_details(int target_id) {
    ifstream file("DATA FILES/Available properties.csv");
    if (!file) {
        cout << "failed to open file" << endl;
        return;
    }

    vector<PROPERTY_DETAILS> props;
    string line;
    bool found = false;

    while (getline(file, line)) {
        stringstream ss(line);
        string idStr, areaStr, landType;

        getline(ss, idStr, ',');
        getline(ss, areaStr, ',');
        getline(ss, landType);

        int id = stoi(idStr);
        int area = stoi(areaStr);

        if (id != target_id) {
            props.push_back(PROPERTY_DETAILS(area, id, landType));
        } else {
            cout << "Property with ID " << target_id << " found and deleted." << endl;
            found = true;
        }
    }
    file.close();

    if (!found) {
        cout << "Property with ID " << target_id << " not found." << endl;
    }

    ofstream out("DATA FILES/Available properties.csv", ios::trunc);
    if (!out) {
        cout << "failed to open file" << endl;
        return;
    }

    for (int i = 0; i < (int)props.size(); i++) {
        out << props[i].getPropertyID() << "," << props[i].getArea() << "," << props[i].getLandType() << "\n";
    }
    out.close();
}
void property_details_data_base_class::update_details(int target_id, int new_area, string new_landType) {
    ifstream file("DATA FILES/Available properties.csv");
    if (!file) {
        cout << "failed to open file" << endl;
        return;
    }

    vector<PROPERTY_DETAILS> props;
    string line;

    while (getline(file, line)) {
        stringstream ss(line);
        string idStr, areaStr, landType;

        // Fix typo: getline, not getliopne
        getline(ss, idStr, ',');
        getline(ss, areaStr, ',');
        getline(ss, landType);

        int id = stoi(idStr);
        int area = stoi(areaStr);

        // Make sure your PROPERTY_DETAILS constructor parameters match these!
        props.push_back(PROPERTY_DETAILS(id, area, landType));
    }
    file.close();

    bool found = false;
    for (int i = 0; i < (int)props.size(); i++) {
        if (props[i].getPropertyID() == target_id) {
            props[i].setArea(new_area);
            props[i].setLandType(new_landType);  // Use new_landType parameter, not undefined variable
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Property with ID " << target_id << " not found." << endl;
        return;
    }

    ofstream out("DATA FILES/Available properties.csv", ios::trunc);
    if (!out) {
        cout << "failed to open file" << endl;
        return;
    }

    for (int i = 0; i < (int)props.size(); i++) {
        // Write in correct CSV order: id, area, landType
        out << props[i].getPropertyID() << "," << props[i].getArea() << "," << props[i].getLandType() << "\n";
    }
    out.close();

    cout << "Property details updated successfully." << endl;
}


void property_details_data_base_class::read_details() {
    ifstream file("DATA FILES/Available properties.csv");
    if (!file) {
        cout << "failed to open file" << endl;
        return;
    }

    cout << "Id\tArea\tLand Type" << endl;
    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string idStr, areaStr, landType;

        getline(ss, idStr, ',');
        getline(ss, areaStr, ',');
        getline(ss, landType);

        cout << idStr << "\t" << areaStr << "\t" << landType << endl;
    }
    file.close();
}