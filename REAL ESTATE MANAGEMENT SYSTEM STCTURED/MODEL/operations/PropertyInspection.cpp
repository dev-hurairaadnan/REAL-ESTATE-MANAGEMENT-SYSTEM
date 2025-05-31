#include "PropertyInspection.h"

PropertyInspection::PropertyInspection() : registrationNo(""), measuredArea(""), conflict("") {}

PropertyInspection::PropertyInspection(const std::string& regNo, const std::string& area, const std::string& conflict)
    : registrationNo(regNo), measuredArea(area), conflict(conflict) {}

void PropertyInspection::setRegistrationNo(const std::string& regNo) {
    registrationNo = regNo;
}

std::string PropertyInspection::getRegistrationNo() const {
    return registrationNo;
}

void PropertyInspection::setMeasuredArea(const std::string& area) {
    measuredArea = area;
}

std::string PropertyInspection::getMeasuredArea() const {
    return measuredArea;
}

void PropertyInspection::setConflict(const std::string& conflictStatus) {
    conflict = conflictStatus;
}

std::string PropertyInspection::getConflict() const {
    return conflict;
}
