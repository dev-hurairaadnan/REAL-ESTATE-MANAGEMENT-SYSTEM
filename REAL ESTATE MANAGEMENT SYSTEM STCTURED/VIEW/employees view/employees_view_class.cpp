//
// Created by Dev.Huraira on 5/23/2025.
//

#include "employees_view_class.h"
#include <iostream>


#include <limits>
void employees_view_class::input_agent_EmployeeDetails(std::string& name, std::string& pass,
                                                       std::string& role, std::string& dept) {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear buffer
    std::cout << "Enter Agent Name: ";
    std::getline(std::cin, name);

    std::cout << "Enter Password: ";
    std::getline(std::cin, pass);

    role = "Employee";
    dept = "Agent";
}

void employees_view_class::input_finance_EmployeeDetails(std::string& name, std::string& pass,
                                                         std::string& role, std::string& dept) {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter Finance Employee Name: ";
    std::getline(std::cin, name);

    std::cout << "Enter Password: ";
    std::getline(std::cin, pass);

    role = "Employee";
    dept = "Accounts";
}

void employees_view_class::input_operation_EmployeeDetails(std::string& name, std::string& pass,
                                                           std::string& role, std::string& dept) {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter Operation Employee Name: ";
    std::getline(std::cin, name);

    std::cout << "Enter Password: ";
    std::getline(std::cin, pass);

    role = "Employee";
    dept = "Operation";
}

void employees_view_class::input_DIRECTORDetails(std::string& name, std::string& pass,
                                                 std::string& role, std::string& dept) {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Enter Director Name: ";
    std::getline(std::cin, name);

    std::cout << "Enter Password: ";
    std::getline(std::cin, pass);

    std::cout << "Enter Department to manage: ";
    std::getline(std::cin, dept);

    role = "irector";
}

std::string employees_view_class::seachbyname() {
    std::string name;
    std::cout << "Enter Employee Name to search: ";
    std::getline(std::cin, name);  // No ignore here
    return name;
}

std::string employees_view_class::getNewPassword() {
    std::string pass;
    std::cout << "Enter New Password: ";
    std::getline(std::cin, pass);  // No ignore here
    return pass;
}

std::string employees_view_class::getNewRole() {
    std::string role;
    std::cout << "Enter New Role: ";
    std::getline(std::cin, role);  // No ignore here
    return role;
}


std::string employees_view_class::getNewDepartment() {

    std::string dept;
    std::cout << "Enter New Department: ";
    std::getline(std::cin, dept);
    return dept;
}


void employees_view_class::showAgentDashboard() {
    int choice;

    do {
        cout << "\n========= AGENT DEPARTMENT DASHBOARD =========\n";
        cout << "1.  Add Property to Inventory for Sale\n";
        cout << "2.  Delete Property from Inventory\n";
        cout << "3.  Update Property in Inventory\n";
        cout << "4.  View Inventory\n";
        cout << "5.  Add Customer + Property Details\n";
        cout << "6.  Delete Customer + Property Details\n";
        cout << "7.  Update Customer + Property Details\n";
        cout << "8.  View Customer + Property Details\n";
        cout << "9.  Give Feedback\n";
        cout << "10. View Feedback\n";
        cout << "11. Predict Commission on Property\n";
        cout << "12. View Commission on Property\n";
        cout << "13. Create Appointment\n";
        cout << "14. Cancel Appointment\n";
        cout << "15. Display Appointments\n";
        cout << "16. Logout\n";
        cout << "Enter your choice: ";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
            case 1: {
                PROPERTY_DETAILS_CONTROLLERS_CLASS P1;
                P1.addProperty();
                break;
            }
            case 2: {
                PROPERTY_DETAILS_CONTROLLERS_CLASS P1;
                P1.deleteProperty();
                break;
            }
            case 3: {
                PROPERTY_DETAILS_CONTROLLERS_CLASS P1;
                P1.updateProperty();
                // updateProperty();
                break;
            }
            case 4: {
                PROPERTY_DETAILS_CONTROLLERS_CLASS P1;
                P1.showProperties();
                // saveProperty();
                break;
            }
            case 5: {
                customer_details_controller_class C1;
                C1.addCustomer();
                // addCustomerDetails();
                break;
            }
            case 6: {
                customer_details_controller_class C1;
                C1.deleteCustomer();

                // deleteCustomer Details();
                break;
            }
            case 7: {
                customer_details_controller_class C1;
                C1.updateCustomer();
                // updateCustomerDetails();
                break;
            }
            case 8: {
                customer_details_controller_class C1;
                C1.viewCustomers();
                // viewCustomerDetails();
                break;
            }
            case 9: {
                FeedbackController F1;
                F1.giveFeedback();
                // giveFeedback();
                break;
            }
            case 10: {
                FeedbackController F1;
                F1.viewFeedbackReport();
                // viewFeedback();
                break;
            }
            case 11: {
                CommissionCalculatorController COM1;
                COM1.performCommissionCalculation();
                // predictCommission();
                break;
            }
            case 12: {
                CommissionCalculatorController COM1;
                COM1.displayCommissionHistory();
                // viewCommission();
                break;
            }
            case 13: {
                AppointmentController APC1;
                APC1.createAppointment();
                // createAppointment();
                break;
            }
            case 14: {
                AppointmentController APC2;
                APC2.cancelAppointment();
                // cancelAppointment();
                break;
            }
            case 15: {
                AppointmentController APC3;
                APC3.displayAppointments();
                // displayAppointments();
                break;
            }
            case 16: {
                cout << "Logging out from Agent Department dashboard...\n";
                return;
            }
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 16);
}

void employees_view_class::showOperationsDashboard() {

    int choice;

    do {
        cout << "\n========= OPERATIONS DEPARTMENT DASHBOARD =========\n";
        cout << "1.  Add Inspection Report\n";
        cout << "2.  View Inspection Report\n";
        cout << "3.  Add Listing Report\n";
        cout << "4.  Show Listing Report\n";
        cout << "5.  Add Utility Details\n";
        cout << "6.  Show Utility Details\n";
        cout << "7.  Logout\n";
        cout << "Enter your choice: ";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
            case 1: {
                InspectionController Ic1;
                Ic1.addInspection();
                // addInspectionReport();
                break;
            }
            case 2: {
                InspectionController Ic1;
                Ic1.showAllInspections();
                // viewInspectionReport();
                break;
            }
            case 3: {
                ListingManagerController l1;
                l1.addListing();
                // addListingReport();
                break;
            }
            case 4: {
                ListingManagerController l1;
                l1.viewAllListings();
                // showListingReport();
                break;
            }
            case 5: {
                UtilityController U1;
                U1.addUtility();
                // addUtilityDetails();
                break;
            }
            case 6: {
                UtilityController U1;
                U1.showAllUtilities();
                // showUtilityDetails();
                break;
            }
            case 7:
                cout << "Logging out from Operations Department dashboard...\n";
                return;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);
}

void employees_view_class::showAccountsDashboard() {
    int choice;

    do {
        cout << "\n========= ACCOUNTS DEPARTMENT DASHBOARD =========\n";
        cout << "1.  Add Expense\n";
        cout << "2.  Add Completed Deal\n";
        cout << "3.  View Deals\n";
        cout << "4.  Predict Tax\n";
        cout << "5.  View Expenses\n";
        cout << "6.  Logout\n";
        cout << "Enter your choice: ";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        switch (choice) {
            case 1: {
                AccountsController A1;
                A1.addExpense();
                // addExpense();
                break;
            }
            case 2: {
                AccountsController A1;
                A1.addDeal();
                // addCompletedDeal();
                break;
            }
            case 3: {
                AccountsController A1;
                A1.viewDeals();
                // viewDeals();
                break;
            }
            case 4: {
                AccountsController A1;
                A1.predictCommission();
                // pre]
                // dictTax();
                break;
            }
            case 5: {
                AccountsController A1;
                A1.viewExpenses();
                // viewExpenses();
                break;
            }

            case 6: {
                cout << "Logging out from Accounts Department dashboard...\n";
                return;
            }
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 6);
}


void employees_view_class::showAgentDirectorDashboard() {
    int choice;

    do {
        cout << "\n=========== AGENT DIRECTOR DASHBOARD ===========\n";
        cout<<"1.Add Employee\n";
        cout << "2. Delete Employee\n";
        cout << "3. View Employees\n";
        cout << "4. Update Employee\n";
        cout << "5. Access Agent Department\n";
        cout << "6. Logout\n";
        cout << "Enter your choice: ";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        switch (choice) {
            case 1: {
                EmployeesController E1;
                E1.directorAddEmployee("Agent");

                break;
            }
            case 2: {

                EmployeesController E1;
                E1.deleteEmployee();

                // viewEmployees(); // Connect with your controller
                break;
            }
            case 3: {
                EmployeesController E1;
                E1.viewAllEmployees();
                // updateEmployee(); // Connect with your controller
                break;
            }
            case 4: {
                EmployeesController E1;
                E1.updateEmployee();
                break;
            }
            case 5: {
                showAgentDashboard();
                break;
            }
            case 6: {
                cout << "Logging out from Agent Director Dashboard...\n";
                return;
            }
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);
}




void employees_view_class::showoperationDirectorDashboard() {
    int choice;

    do {
        std::cout << "\n=========== Operation DIRECTOR DASHBOARD ===========\n";
        std::cout << "1. Add Employee\n";
        std::cout << "2. Delete Employee\n";
        std::cout << "3. View Employees\n";
        std::cout << "4. Update Employee\n";
        std::cout << "5. Access Operational Department\n";
        std::cout << "6. Logout\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (choice) {
            case 1: {
                EmployeesController E1;
                E1.directorAddEmployee("Operation");  // Make sure this method works as expected
                break;
            }
            case 2: {
                EmployeesController E1;
                E1.deleteEmployee();
                break;
            }
            case 3: {
                EmployeesController E1;
                E1.viewAllEmployees();
                break;
            }
            case 4: {
                EmployeesController E1;
                E1.updateEmployee();
                break;
            }
            case 5: {
                showOperationsDashboard();
                break;
            }
            case 6: {
                std::cout << "Logging out from Operation Director Dashboard...\n";
                return;
            }
            default:
                std::cout << "❌ Invalid choice. Please try again.\n";
        }
    } while (choice != 6);
}


void employees_view_class::showaccountDirectorDashboard() {
    int choice;

    do {
        cout << "\n=========== Account DIRECTOR DASHBOARD ===========\n";
        cout<<"1.add Employee\n";
        cout << "2. Delete Employee\n";
        cout << "3. View Employees\n";
        cout << "4. Update Employee\n";
        cout << "5. Access Accounts Department\n";
        cout << "6. Logout\n";
        cout << "Enter your choice: ";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        switch (choice) {
            case 1: {
                EmployeesController E1;
                E1.directorAddEmployee("Accounts");

                break;
            }
            case 2: {
                EmployeesController E1;
                E1.deleteEmployee();

                break;
            }
            case 3: {
                EmployeesController E1;
                E1.viewAllEmployees();
                break;
            }
            case 4: {
                EmployeesController E1;
                E1.updateEmployee();
                break;
            }
            case 5: {
                showAccountsDashboard();
                break;
            }
            case 6: {
                cout << "Logging out from Operation Director Dashboard...\n";
                return;
return;
            }

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 7);
}
void employees_view_class::showCeoDashboard() {
    int choice;

    do {
        cout << "\n=============== CEO DASHBOARD ===============\n";
        cout << "1. Add Director\n";
        cout << "2. Delete Employee\n";
        cout << "3. View Employees\n";
        cout << "4. Update Employee\n";
        cout << "5. Access Agent Department\n";
        cout << "6. Access Operations Department\n";
        cout << "7. Access Accounts Department\n";
        cout << "8. Logout\n";
        cout << "Enter your choice: ";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        switch (choice) {
            case 1: {
                EmployeesController E1;
                E1.ceoAddDirector();
                break;
            }
            case 2: {
                EmployeesController E1;
                E1.deleteEmployee();
                // Call controller->E1deleteEmployee();
                break;
            }
            case 3: {
                EmployeesController E1;
                E1.viewAllEmployees();
                // Call controller->viewEmployees();
                break;
            }
            case 4: {

                EmployeesController E1;

E1.updateEmployee();
                break;

            }
                // Call controller->updateEmployee();
            case 5: {
showAgentDirectorDashboard();
                // Call showAgentDashboard(); (reuse Agent view function)
                break;
            }
            case 6: {
               employees_view_class::showoperationDirectorDashboard();
                // Call showOperationsDashboard();
                break;
            }
            case 7: {
employees_view_class::showaccountDirectorDashboard();
                // Call showAccountsDashboard();
                break;
            }
            case 8: {
                cout << "Logging out...\n";
return;
            }
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 8);
}
