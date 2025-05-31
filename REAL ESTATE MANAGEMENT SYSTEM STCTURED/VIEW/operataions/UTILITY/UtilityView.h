#ifndef UTILITY_VIEW_H
#define UTILITY_VIEW_H

#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\operations\UtilityBill.h"
#include <iostream>
#include <vector>
class UtilityView {
public:
    UtilityBill getUtilityInput();


    void showUtility(const UtilityBill& utility);
    void showMessage(const std::string& message);
};

#endif