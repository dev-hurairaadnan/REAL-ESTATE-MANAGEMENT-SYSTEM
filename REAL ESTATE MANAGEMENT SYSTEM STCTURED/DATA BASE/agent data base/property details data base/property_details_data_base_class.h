//
// Created by Dev.Huraira on 5/21/2025.
//

#ifndef PROPERTY_DETAILS_DATA_BASE_CLASS_H
#define PROPERTY_DETAILS_DATA_BASE_CLASS_H
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\agent model\PROPERTY_DETAILS.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\agent model\PROPERTY_DETAILS.h"

class property_details_data_base_class {
    private:
    vector<PROPERTY_DETAILS> property_details;
public:

void add_details(PROPERTY_DETAILS &p1);

    void delete_details(int target_idey);

    void update_details(int target_id, int new_area, string landType);

    void read_details();



};



#endif //PROPERTY_DETAILS_DATA_BASE_CLASS_H
