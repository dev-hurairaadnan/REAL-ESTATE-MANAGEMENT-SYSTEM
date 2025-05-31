
#include "LoginController.h"
#include <iostream>

void LoginController::loginAndRedirect() {
    string username;string password;string role;string dept;

    view.getLoginInput( username,  password,  role,  dept);


    // Validate user using DB
    if (db.validateUser(username, password, loginModel)) {
        view.showLoginResult(true, loginModel.getRole());

        std::string role = loginModel.getRole();
        std::string dept = loginModel.getDepartment();

        // Access logic
        if (role == "CEO") {
            if (dept=="ceo") {
                employees_view_class ceo;
                ceo.showCeoDashboard();
            }}
        else if (role == "Director") {
            if (dept == "Agent") {
                employees_view_class director;

                director.showAgentDirectorDashboard();
            }
            else if (dept == "Accounts") {
                employees_view_class director;

                director.showaccountDirectorDashboard();
            }
            else if (dept == "Operations"){
                employees_view_class director;

                director.showoperationDirectorDashboard();
        }
        }
        else if (role == "employee") {
            if (dept == "Agent") {
                employees_view_class agent;
                agent.showAgentDashboard();
            }
            else if (dept == "Accounts") {
                employees_view_class finance;
                finance.showAccountsDashboard();
            }
            else if (dept == "Operations") {
                employees_view_class operations;
                operations.showOperationsDashboard();
            }
        }
        else {
            std::cout << "Invalid role or department.\n";
        }
    } else {
        view.showLoginResult(false, "");
    }
}
