#include "PROPERTY_DETAILS_CONTROLLERS_CLASS.h"
#include <fstream>
#include <iostream>
using namespace std;

void PROPERTY_DETAILS_CONTROLLERS_CLASS::loadProperties() {
    properties.clear();
    ifstream file("Available properties.csv");
    int id, area;
    string landType;

    while (file >> id >> area >> landType) {
        properties.push_back(PROPERTY_DETAILS(area, id, landType));
    }
    file.close();
}

void PROPERTY_DETAILS_CONTROLLERS_CLASS::addProperty() {
    PROPERTY_DETAILS p = view.PROPERTY_DETAILS_VIEW_INPUT();

    for (int i = 0; i < properties.size(); i++) {
        if (properties[i].getPropertyID() == p.getPropertyID()) {
            cout << "Property ID already exists. Aborted.\n";
            return;
        }
    }

    properties.push_back(p);
    db.add_details(p);
}

void PROPERTY_DETAILS_CONTROLLERS_CLASS::deleteProperty() {
    int id = view.input_property_idey(0);
    db.delete_details(id);
}

void PROPERTY_DETAILS_CONTROLLERS_CLASS::updateProperty() {
    int id = view.input_property_idey(0);
    int newArea;
    string newLandType;
    view.input_new_details(newArea, newLandType);
    db.update_details(id, newArea, newLandType);
}

void PROPERTY_DETAILS_CONTROLLERS_CLASS::showProperties() {
    db.read_details();
}
