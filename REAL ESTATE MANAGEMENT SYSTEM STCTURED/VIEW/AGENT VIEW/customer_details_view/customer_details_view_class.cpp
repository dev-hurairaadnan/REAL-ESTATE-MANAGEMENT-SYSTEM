#include "customer_details_view_class.h"
#include <iostream>
using namespace std;

CUSTOMER_DETAILS customer_details_view_class::getCustomerDetailsFromUser() {
    string name, land_type;
    int contact_no, area;

    cout << "\n=========== Enter Customer Details ===========\n";
    cout << "Full Name       : ";
    cin.ignore(); // clear previous newline
    getline(cin, name);

    cout << "Contact Number  : ";
    cin >> contact_no;

    cout << "Land Type       : ";
    cin.ignore(); // clear leftover newline
    getline(cin, land_type);

    cout << "Area (in sq ft) : ";
    cin >> area;

    cout << "================================================\n";

    return CUSTOMER_DETAILS(name, contact_no, land_type, area);
}

CUSTOMER_DETAILS customer_details_view_class::view_update_customer_input() {
    string name, land_type;
    int contact_no, area;

    cout << "\n========== Update Customer Details ==========\n";
    cout << "Enter Name            : ";
    cin.ignore();
    getline(cin, name);

    cout << "New Contact Number    : ";
    cin >> contact_no;

    cout << "New Land Type         : ";
    cin.ignore();
    getline(cin, land_type);

    cout << "New Area (in sq ft)   : ";
    cin >> area;

    cout << "=============================================\n";

    return CUSTOMER_DETAILS(name, contact_no, land_type, area);
}

string customer_details_view_class::view_get_customer_name_for_deletion() {
    string name;
    cout << "\nEnter the full name of the customer to delete: ";
    cin.ignore();
    getline(cin, name);
    return name;
}
