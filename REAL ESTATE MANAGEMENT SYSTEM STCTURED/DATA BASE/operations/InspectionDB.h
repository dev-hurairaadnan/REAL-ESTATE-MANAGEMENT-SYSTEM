// InspectionDB.h
#ifndef INSPECTION_DB_H
#define INSPECTION_DB_H

#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\operations\PropertyInspection.h"
#include <fstream>
#include <vector>

class InspectionDB {
private:

public:
    void saveInspection(const PropertyInspection& inspection);
    std::vector<PropertyInspection> loadInspections();
};

#endif
