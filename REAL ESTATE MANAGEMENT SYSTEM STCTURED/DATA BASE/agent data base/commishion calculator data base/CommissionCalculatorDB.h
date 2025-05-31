#ifndef COMMISSIONCALCULATORDATABASE_H
#define COMMISSIONCALCULATORDATABASE_H
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\agent model\CommissionCalculatorModel.h"
#include <fstream>
#include <string>
using namespace std;

class CommissionCalculatorDB {
private:
    const string filename = "commission_history.csv";

public:
    bool saveCommission(const CommissionCalculatorModel &model);
    void showHistory();
};

#endif
