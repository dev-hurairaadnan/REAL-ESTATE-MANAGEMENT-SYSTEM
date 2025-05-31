#ifndef INSPECTION_VIEW_H
#define INSPECTION_VIEW_H

#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\operations\PropertyInspection.h"
#include <iostream>

class InspectionView {
public:
    PropertyInspection getInspectionInput();
    void showInspection(const PropertyInspection& inspection);
    void showMessage(const std::string& message);
};

#endif