#include "PROPERTY_DETAILS.h"

PROPERTY_DETAILS::PROPERTY_DETAILS() {}

PROPERTY_DETAILS::PROPERTY_DETAILS(int a, int pid, string l) {
    area = a;
    property_id = pid;
    land_type =l;
}

void PROPERTY_DETAILS::setArea(int a) {
    area = a;
}

void PROPERTY_DETAILS::setPropertyID(int pid) {
    property_id = pid;
}

void PROPERTY_DETAILS::setLandType(string l) {
    land_type = l;
}

int PROPERTY_DETAILS::getArea() {
    return area;
}

int PROPERTY_DETAILS::getPropertyID() {
    return property_id;
}

string PROPERTY_DETAILS::getLandType() {
    return land_type;
}
