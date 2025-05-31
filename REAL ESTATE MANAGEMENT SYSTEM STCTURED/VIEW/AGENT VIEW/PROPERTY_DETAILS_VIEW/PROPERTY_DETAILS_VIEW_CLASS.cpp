#include "PROPERTY_DETAILS_VIEW_CLASS.h"

#include <iostream>
#include <bits/ostream.tcc>
#include <limits>
using namespace std;


PROPERTY_DETAILS PROPERTY_DETAILS_VIEW_CLASS::PROPERTY_DETAILS_VIEW_INPUT() {
    int area;
    int property_id;
    string land_type;

    cout << "Enter property id: " << endl;
    cin >> property_id;

    cout << "Enter property area: " << endl;
    cin >> area;

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ✅ Clear buffer before getline

    cout << "Enter property land: " << endl;
    getline(cin, land_type);

    return PROPERTY_DETAILS(area, property_id, land_type);
}

int PROPERTY_DETAILS_VIEW_CLASS::input_property_idey(int idey_target) {
    cout << "Enter property idey: " << endl;
    cin >> idey_target;
    return idey_target;
}

void PROPERTY_DETAILS_VIEW_CLASS::input_new_details(int &area, string &landType) {
    cout << "Enter new area: ";
    cin >> area;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Enter new land type: ";
    getline(cin, landType);
}

void PROPERTY_DETAILS_VIEW_CLASS::display_all_properties() {
    // You can implement the display logic here if needed.
}