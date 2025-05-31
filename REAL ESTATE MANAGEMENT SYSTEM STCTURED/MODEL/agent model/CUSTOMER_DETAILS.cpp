#include "CUSTOMER_DETAILS.h"

// Constructors
CUSTOMER_DETAILS::CUSTOMER_DETAILS() {}

CUSTOMER_DETAILS::CUSTOMER_DETAILS(string n, int c, string l, int a) {
    name = n;
    contact_no = c;
    land_type = l;
    area = a;
}

// Setters - these change the object, so no const
void CUSTOMER_DETAILS::setName(string n) {
    name = n;
}

void CUSTOMER_DETAILS::setContactNo(int c) {
    contact_no = c;
}

void CUSTOMER_DETAILS::setLandType(string l) {
    land_type = l;
}

void CUSTOMER_DETAILS::setArea(int a) {
    area = a;
}


string CUSTOMER_DETAILS::getName() const {
    return name;
}

int CUSTOMER_DETAILS::getContactNo() const {
    return contact_no;
}

string CUSTOMER_DETAILS::getLandType() const {
    return land_type;
}

int CUSTOMER_DETAILS::getArea() const {
    return area;
}
