#ifndef COMMISSIONCALCULATORMODEL_H
#define COMMISSIONCALCULATORMODEL_H

#include <string>
using namespace std;

class CommissionCalculatorModel {
private:
    double price;
    string landType;
    double commission;

public:
    CommissionCalculatorModel();

    void setPrice(double p);
    void setLandType(const string &type);

    bool calculateCommission(double price, string landtype);

    double getPrice() const;
    string getLandType() const;
    double getCommission() const;
};

#endif
