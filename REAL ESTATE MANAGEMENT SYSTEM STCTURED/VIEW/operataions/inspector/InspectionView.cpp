// InspectionView.cpp
#include "InspectionView.h"
#include <iostream>
#include <string>

PropertyInspection InspectionView::getInspectionInput() {
    std::string regNo, area, conflict;

    std::cout << "\n======= Property Inspection Input =======\n";

    std::cout << "📄 Enter Registration Number: ";
    std::getline(std::cin, regNo);

    std::cout << "📏 Enter Measured Area: ";
    std::getline(std::cin, area);

    std::cout << "⚠️  Is there any conflict? (yes/no): ";
    std::getline(std::cin, conflict);

    std::cout << "========================================\n\n";

    return PropertyInspection(regNo, area, conflict);
}

void InspectionView::showInspection(const PropertyInspection& inspection) {
    std::cout << "\n======= Inspection Details =======\n";
    std::cout << "Registration No : " << inspection.getRegistrationNo() << "\n";
    std::cout << "Measured Area   : " << inspection.getMeasuredArea() << "\n";
    std::cout << "Conflict        : " << inspection.getConflict() << "\n";
    std::cout << "==================================\n\n";
}

void InspectionView::showMessage(const std::string& message) {
    std::cout << "\n💬 " << message << "\n";
}
