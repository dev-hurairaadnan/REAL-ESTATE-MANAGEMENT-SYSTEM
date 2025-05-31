#include "UtilityController.h"

void UtilityController::addUtility() {
    UtilityBill utility = view.getUtilityInput();
    db.saveUtility(utility);
    cout<<"Utility record added successfully.";
}

void UtilityController::showAllUtilities() {
    std::vector<UtilityBill> list = db.loadUtilities();
    for (const auto& item : list) {
        view.showUtility(item);
    }
}
