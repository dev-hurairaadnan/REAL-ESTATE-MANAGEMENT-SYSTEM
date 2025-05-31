#include "CommissionCalculatorModel.h"

CommissionCalculatorModel::CommissionCalculatorModel() : price(0), landType(""), commission(0) {}

void CommissionCalculatorModel::setPrice(double p) {
    price = p;
}

void CommissionCalculatorModel::setLandType(const string &type) {
    landType = type;
}

bool CommissionCalculatorModel::calculateCommission(double price, string landtype) {
    if (landtype == "commercial") {
        commission = price * 0.02;
        return true;
    } else if (landtype == "residential") {
        commission = price * 0.01;
        return true;
    } else {
        commission = 0;
        return false; // invalid land type
    }
}

double CommissionCalculatorModel::getPrice() const {
    return price;
}
string CommissionCalculatorModel::getLandType() const {
    return landType;
}
double CommissionCalculatorModel::getCommission() const {
    return commission;
}
