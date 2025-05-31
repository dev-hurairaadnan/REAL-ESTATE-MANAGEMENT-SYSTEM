//
// Created by Dev.Huraira on 5/21/2025.
//

#ifndef PROPERTY_DETAILS_CONTROLLERS_CLASS_H
#define PROPERTY_DETAILS_CONTROLLERS_CLASS_H
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\VIEW\AGENT VIEW\PROPERTY_DETAILS_VIEW\PROPERTY_DETAILS_VIEW_CLASS.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\DATA BASE\agent data base\property details data base\property_details_data_base_class.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\agent model\PROPERTY_DETAILS.h"
using namespace std;


class PROPERTY_DETAILS_CONTROLLERS_CLASS {
private:
    PROPERTY_DETAILS_VIEW_CLASS view;
    property_details_data_base_class db;
    vector<PROPERTY_DETAILS> properties;

public:

    void loadProperties();

    void saveProperties();

    void addProperty();

    void deleteProperty();

    void updateProperty();

    void showProperties();
};



#endif //PROPERTY_DETAILS_CONTROLLERS_CLASS_H
