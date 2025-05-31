// InspectionController.h
#ifndef INSPECTION_CONTROLLER_H
#define INSPECTION_CONTROLLER_H

#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\DATA BASE\operations\InspectionDB.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\operations\PropertyInspection.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\VIEW\operataions\inspector\InspectionView.h"

class InspectionController {
private:
    InspectionView view;
    InspectionDB db;

public:
    void addInspection();
    void showAllInspections();
};

#endif