#ifndef UTILITY_CONTROLLER_H
#define UTILITY_CONTROLLER_H

#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\operations\UtilityBill.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\VIEW\operataions\UTILITY\UtilityView.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\DATA BASE\operations\UtilityDB.h"

class UtilityController {
private:
    UtilityView view;
    UtilityDB db;

public:
    void addUtility();
    void showAllUtilities();
};

#endif