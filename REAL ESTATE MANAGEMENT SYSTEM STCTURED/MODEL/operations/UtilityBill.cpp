#include "UtilityBill.h"

UtilityBill::UtilityBill() : propertyId(""), electricityBill(""), gasBill(""), waterBill("") {}

UtilityBill::UtilityBill(const string& id, const string& elec, const string& gas, const string& water)
    : propertyId(id), electricityBill(elec), gasBill(gas), waterBill(water) {}

void UtilityBill::setPropertyId(const string& id) {
    propertyId = id;
}
std::string UtilityBill::getPropertyId() const {
    return propertyId;
}

void UtilityBill::setElectricityBill(const string& bill) {
    electricityBill = bill;
}
std::string UtilityBill::getElectricityBill() const {
    return electricityBill;
}

void UtilityBill::setGasBill(const string& bill) {
    gasBill = bill;
}
string UtilityBill::getGasBill() const {
    return gasBill;
}

void UtilityBill::setWaterBill(const string& bill) {
    waterBill = bill;
}
string UtilityBill::getWaterBill() const {
    return waterBill;
}