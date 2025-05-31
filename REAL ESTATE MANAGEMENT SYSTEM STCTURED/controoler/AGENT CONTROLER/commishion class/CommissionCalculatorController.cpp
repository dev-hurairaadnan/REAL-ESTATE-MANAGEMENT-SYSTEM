#include "CommissionCalculatorController.h"
#include "C:/Users/MMT/CLionProjects/REAL ESTATE MANAGEMENT SYSTEM STCTURED/MODEL/agent model/CommissionCalculatorModel.h"
#include "C:/Users/MMT/CLionProjects/REAL ESTATE MANAGEMENT SYSTEM STCTURED/VIEW/AGENT VIEW/commishion view/CommissionCalculatorView.h"
#include "C:/Users/MMT/CLionProjects/REAL ESTATE MANAGEMENT SYSTEM STCTURED/DATA BASE/agent data base/commishion calculator data base/CommissionCalculatorDB.h"
#include <iostream>
using namespace std;

void CommissionCalculatorController::performCommissionCalculation() {
    CommissionCalculatorModel model;
    CommissionCalculatorView view;
    CommissionCalculatorDB db;

    int price;
    std::string landType;

    view.inputCommissionDetails(price, landType);

    model.setPrice(price);
    model.setLandType(landType);


    if (model.calculateCommission(price, landType)) {
        view.showCommission(model.getCommission());

        if (!db.saveCommission(model)) {
cout<<"failed";
        }
    } else {
    }
}

void CommissionCalculatorController::displayCommissionHistory() {
    CommissionCalculatorDB db;
    db.showHistory();
}
