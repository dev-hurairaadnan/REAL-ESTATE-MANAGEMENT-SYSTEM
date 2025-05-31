// InspectionController.cpp
#include "InspectionController.h"

void InspectionController::addInspection() {
    PropertyInspection inspection = view.getInspectionInput();
    db.saveInspection(inspection);
    view.showMessage("Inspection data saved successfully.");
}

void InspectionController::showAllInspections() {
    std::vector<PropertyInspection> inspections = db.loadInspections();
    for (const auto& inspection : inspections) {
        view.showInspection(inspection);
    }
}
