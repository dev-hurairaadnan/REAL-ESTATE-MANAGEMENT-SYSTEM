


#ifndef LOGINCONTROLLER_H
#define LOGINCONTROLLER_H


#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\VIEW\LOGIN VIEW\LoginView.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\DATA BASE\LOGIN DATA BASE\LoginDatabase.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\LOGIN MODEL\login_model_class.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\VIEW\employees view\employees_view_class.h"

class LoginController {

private:
    login_model_class loginModel;
    LoginView view;
    LoginDatabase db;

public:
    void loginAndRedirect(); // Single function that handles everything
};

#endif
