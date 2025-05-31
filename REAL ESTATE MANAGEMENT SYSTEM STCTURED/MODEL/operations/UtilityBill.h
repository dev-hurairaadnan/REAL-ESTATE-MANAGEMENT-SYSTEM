#ifndef UTILITY_MODEL_H
#define UTILITY_MODEL_H

#include <string>
using namespace std;
class UtilityBill {
private:
    std::string propertyId;
    std::string electricityBill;
    std::string gasBill;
    std::string waterBill;

public:
    UtilityBill();
    UtilityBill(const string& id, const string& elec, const string& gas, const string& water);

    void setPropertyId(const string& id);
    string getPropertyId() const;

    void setElectricityBill(const  string& bill);
    std::string getElectricityBill() const;

    void setGasBill(const string& bill);
    string getGasBill() const;

    void setWaterBill(const string& bill);
    string getWaterBill() const;
};

#endif
