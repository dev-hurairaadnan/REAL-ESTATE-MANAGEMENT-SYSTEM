#ifndef CUSTOMER_DETAILS_CONTROLLER_CLASS_H
#define CUSTOMER_DETAILS_CONTROLLER_CLASS_H
#include "C:/Users/MMT/CLionProjects/REAL ESTATE MANAGEMENT SYSTEM STCTURED/DATA BASE/agent data base/customer details data base/customer_details_data_base_class.h"
#include"C:/Users/MMT/CLionProjects/REAL ESTATE MANAGEMENT SYSTEM STCTURED/VIEW/AGENT VIEW/customer_details_view/customer_details_view_class.h"
#include "C:/Users/MMT/CLionProjects/REAL ESTATE MANAGEMENT SYSTEM STCTURED/VIEW/AGENT VIEW/customer_details_view/customer_details_view_class.h"


class customer_details_controller_class {
private:
    customer_details_view_class view;
    customer_details_data_base_class database;

public:
    void addCustomer();
    void deleteCustomer();
    void updateCustomer();
    void viewCustomers();
};

#endif
