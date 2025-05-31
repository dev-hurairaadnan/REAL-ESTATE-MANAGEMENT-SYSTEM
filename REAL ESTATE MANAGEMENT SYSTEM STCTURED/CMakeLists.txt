cmake_minimum_required(VERSION 3.31)
project(REAL_ESTATE_MANAGEMENT_SYSTEM_STRUCTURED)

set(CMAKE_CXX_STANDARD 20)

add_executable(REAL_ESTATE_MANAGEMENT_SYSTEM_STCTURED

        main.cpp

        # MODEL source files
        "MODEL/agent model/CUSTOMER_DETAILS.cpp"
        "MODEL/agent model/PROPERTY_DETAILS.cpp"
        "MODEL/agent model/Appointment.cpp"
        "MODEL/agent model/Feedback.cpp"
        "MODEL/agent model/CommissionCalculatorModel.cpp"
        "MODEL/agent model/CUSTOMER_DETAILS.h"
        "MODEL/agent model/PROPERTY_DETAILS.h"
        "MODEL/agent model/Appointment.h"
        "MODEL/agent model/Feedback.h"
        "MODEL/agent model/CommissionCalculatorModel.h"

        "MODEL/operations/UtilityBill.cpp"
        "MODEL/operations/PropertyInspection.cpp"
        "MODEL/operations/ListingManagerModel.cpp"


        "MODEL/operations/UtilityBill.h"
        "MODEL/operations/PropertyInspection.h"
        "MODEL/operations/ListingManagerModel.h"



        "MODEL/Employees model/Employees_model.cpp"
        "MODEL/Employees model/Employees_model.h"


        "MODEL/ACCOUNTS MODEL/AccountsModel.cpp"
        "MODEL/ACCOUNTS MODEL/AccountsModel.h"

        "MODEL/LOGIN MODEL/login_model_class.cpp"
        "MODEL/LOGIN MODEL/login_model_class.h"

"VIEW/accounts/AccountsView.h"
        "VIEW/accounts/AccountsView.cpp"


"VIEW/AGENT VIEW/APPOINTMENT/AppointmentView.h"
  "VIEW/AGENT VIEW/APPOINTMENT/AppointmentView.cpp"


"VIEW/AGENT VIEW/commishion view/CommissionCalculatorView.h"
"VIEW/AGENT VIEW/commishion view/CommissionCalculatorView.cpp"

        "VIEW/AGENT VIEW/customer_details_view/customer_details_view_class.cpp"
        "VIEW/AGENT VIEW/customer_details_view/customer_details_view_class.h"

"VIEW/AGENT VIEW/feed back view/FeedbackView.h"
        "VIEW/AGENT VIEW/feed back view/FeedbackView.cpp"

"VIEW/AGENT VIEW/PROPERTY_DETAILS_VIEW/PROPERTY_DETAILS_VIEW_CLASS.h"
        "VIEW/AGENT VIEW/PROPERTY_DETAILS_VIEW/PROPERTY_DETAILS_VIEW_CLASS.cpp"
        "VIEW/employees view/employees_view_class.h"
        "VIEW/employees view/employees_view_class.cpp"
        "VIEW/LOGIN VIEW/LoginView.h"
        "VIEW/LOGIN VIEW/LoginView.cpp"
        "VIEW/operataions/inspector/InspectionView.h"
        "VIEW/operataions/inspector/InspectionView.cpp"
        "VIEW/operataions/listing/ListingManagerView.h"
        "VIEW/operataions/listing/ListingManagerView.cpp"
        "VIEW/operataions/UTILITY/UtilityView.h"
        "VIEW/operataions/UTILITY/UtilityView.cpp"
        "VIEW/operataions/UTILITY/UtilityView.cpp"
        "VIEW/operataions/UTILITY/UtilityView.h"

        "DATA BASE/accounts/AccountsDB.h"
        "DATA BASE/accounts/AccountsDB.cpp"

        "DATA BASE/agent data base/appointment/AppointmentDB.h"
        "DATA BASE/agent data base/appointment/AppointmentDB.cpp"
        "DATA BASE/agent data base/commishion calculator data base/CommissionCalculatorDB.h"
        "DATA BASE/agent data base/commishion calculator data base/CommissionCalculatorDB.cpp"
        "DATA BASE/agent data base/customer details data base/customer_details_data_base_class.cpp"
        "DATA BASE/agent data base/customer details data base/customer_details_data_base_class.h"
        "DATA BASE/agent data base/feedback/FeedbackDB.cpp"
        "DATA BASE/agent data base/feedback/FeedbackDB.h"
        "DATA BASE/agent data base/property details data base/property_details_data_base_class.cpp"
        "DATA BASE/agent data base/property details data base/property_details_data_base_class.h"
        "DATA BASE/employees directory/EmployeesDB.h"
        "DATA BASE/employees directory/EmployeesDB.cpp"
        "DATA BASE/LOGIN DATA BASE/LoginDatabase.h"
        "DATA BASE/LOGIN DATA BASE/LoginDatabase.cpp"
        "DATA BASE/operations/InspectionDB.cpp"
        "DATA BASE/operations/InspectionDB.h"
        "DATA BASE/operations/ListingManagerDB.cpp"
        "DATA BASE/operations/ListingManagerDB.h"
        "DATA BASE/operations/UtilityDB.cpp"
        "DATA BASE/operations/UtilityDB.h"









        # Controller source files
        "controoler/operation/listing/ListingManagerController.cpp"
        "controoler/login/LoginController.cpp"
        "controoler/accounts controller/AccountsController.cpp"
        "controoler/AGENT CONTROLER/appointment/AppointmentController.cpp"
        "controoler/AGENT CONTROLER/commishion class/CommissionCalculatorController.cpp"
        "controoler/AGENT CONTROLER/feedback/FeedbackController.cpp"
        "controoler/AGENT CONTROLER/customer details controller class/customer_details_controller_class.cpp"
        "controoler/AGENT CONTROLER/PROPERTY DETAILS CONTROLER/PROPERTY_DETAILS_CONTROLLERS_CLASS.cpp"
        "controoler/employees controller/EmployeesController.cpp"
        "controoler/operation/inspection/InspectionController.cpp"
        "controoler/operation/utility/UtilityController.cpp"

        # Controller headers
        "controoler/accounts controller/AccountsController.h"
        "controoler/AGENT CONTROLER/appointment/AppointmentController.h"
        "controoler/AGENT CONTROLER/commishion class/CommissionCalculatorController.h"
        "controoler/AGENT CONTROLER/feedback/FeedbackController.h"
        "controoler/AGENT CONTROLER/customer details controller class/customer_details_controller_class.h"
        "controoler/AGENT CONTROLER/PROPERTY DETAILS CONTROLER/PROPERTY_DETAILS_CONTROLLERS_CLASS.h"
        "controoler/employees controller/EmployeesController.h"
        "controoler/login/LoginController.h"
        "controoler/operation/inspection/InspectionController.h"
        "controoler/operation/listing/ListingManagerController.h"
        "controoler/operation/utility/UtilityController.h"

        # View source files
        "VIEW/operataions/listing/ListingManagerView.cpp"
        "VIEW/employees view/employees_view_class.cpp"

        # Database source files
        "DATA BASE/operations/ListingManagerDB.cpp"
        "DATA BASE/LOGIN DATA BASE/LoginDatabase.cpp"

)
