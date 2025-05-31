#ifndef UTILITY_DB_H
#define UTILITY_DB_H

#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\operations\UtilityBill.h"
#include <vector>
#include <string>

class UtilityDB {
private:
    std::string filename = "utility_data.csv";

public:
    void saveUtility(const UtilityBill& utility);
    std::vector<UtilityBill> loadUtilities();
};

#endif