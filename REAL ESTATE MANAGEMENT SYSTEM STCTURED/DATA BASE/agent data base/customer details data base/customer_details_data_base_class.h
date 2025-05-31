
#ifndef CUSTOMER_DETAILS_DATA_BASE_CLASS_H
#define CUSTOMER_DETAILS_DATA_BASE_CLASS_H

#include "../../../MODEL/agent model/CUSTOMER_DETAILS.h"
#include <string>
#include <iostream>

using namespace std;

class customer_details_data_base_class {
public:
    void add_customer(CUSTOMER_DETAILS& C);
    void remove_customer(string& target_name);
    void update_customer(string target_name, int new_contact_no, string new_land_type, int new_area);
    void view_customer();
};

#endif
