#include "customer_details_controller_class.h"
#include "C:/Users/MMT/CLionProjects/REAL ESTATE MANAGEMENT SYSTEM STCTURED/DATA BASE/agent data base/customer details data base/customer_details_data_base_class.h"
#include"C:/Users/MMT/CLionProjects/REAL ESTATE MANAGEMENT SYSTEM STCTURED/VIEW/AGENT VIEW/customer_details_view/customer_details_view_class.h"
#include "C:/Users/MMT/CLionProjects/REAL ESTATE MANAGEMENT SYSTEM STCTURED/VIEW/AGENT VIEW/customer_details_view/customer_details_view_class.h"

#include <iostream>
using namespace std;

void customer_details_controller_class::addCustomer() {
    CUSTOMER_DETAILS customer = view.getCustomerDetailsFromUser();

    database.add_customer(customer);
}

void customer_details_controller_class::deleteCustomer() {
    string name = view.view_get_customer_name_for_deletion();

    database.remove_customer(name);
}

void customer_details_controller_class::updateCustomer() {
    CUSTOMER_DETAILS updatedCustomer = view.view_update_customer_input();

    database.update_customer(
        updatedCustomer.getName(),
        updatedCustomer.getContactNo(),
        updatedCustomer.getLandType(),
        updatedCustomer.getArea()
    );
}

void customer_details_controller_class::viewCustomers() {
    database.view_customer();
}
