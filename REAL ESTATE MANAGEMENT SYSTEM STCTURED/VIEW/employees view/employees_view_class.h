
#ifndef EMPLOYEES_VIEW_CLASS_H
#define EMPLOYEES_VIEW_CLASS_H
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\controoler\AGENT CONTROLER\customer details controller class\customer_details_controller_class.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\controoler\AGENT CONTROLER\feedback\FeedbackController.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\controoler\AGENT CONTROLER\feedback\FeedbackController.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\controoler\AGENT CONTROLER\appointment\AppointmentController.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\controoler\AGENT CONTROLER\PROPERTY DETAILS CONTROLER\PROPERTY_DETAILS_CONTROLLERS_CLASS.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\controoler\AGENT CONTROLER\commishion class\CommissionCalculatorController.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\controoler\accounts controller\AccountsController.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\controoler\employees controller\EmployeesController.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\controoler\operation\inspection\InspectionController.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\controoler\operation\listing\ListingManagerController.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\controoler\operation\utility\UtilityController.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\controoler\AGENT CONTROLER\customer details controller class\customer_details_controller_class.h"
#include <string>
using namespace std;

class employees_view_class {
public:
    void agentdasboard();

    void input_agent_EmployeeDetails(string& name, string& pass, string& role, string& dept);

    void input_finance_EmployeeDetails(string& name,string& pass, string& role, string& dept);

    void input_operation_EmployeeDetails(string &name, string &pass, string &role, string &dept);


    void input_DIRECTORDetails(string& name, string& pass, string& role, string& dept);

void input_updateEmployeeDetails(std::string& name, int& newPass, std::string& newRole, std::string& newDept);

    string seachbyname();

    string getNewRole();

    string getNewDepartment();


    void showAgentDashboard();

    void showOperationsDashboard();

    void showAccountsDashboard();

    void showAgentDirectorDashboard();


    void showoperationDirectorDashboard();

    void showaccountDirectorDashboard();

    void showCeoDashboard();

    string getNewPassword();
};
#endif