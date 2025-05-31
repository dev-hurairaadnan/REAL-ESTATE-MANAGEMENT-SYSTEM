#include "UtilityView.h"
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
UtilityBill UtilityView::getUtilityInput() {
    std::string id, elec, gas, water;

    std::cout << "\n========== Enter Utility Bill Details ==========\n";

    std::cout << "Enter Property ID: ";
    std::getline(std::cin, id);

    std::cout << "Electricity Bill (Paid/Not Paid): ";
    std::getline(std::cin, elec);

    std::cout << "Gas Bill (Paid/Not Paid): ";
    std::getline(std::cin, gas);

    std::cout << "Water Bill (Paid/Not Paid): ";
    std::getline(std::cin, water);

    return UtilityBill(id, elec, gas, water);
}
void UtilityView::showUtility(const UtilityBill& utility) {
    std::cout << "\n=============================================================\n";
    std::cout << "| Property ID | Electricity Bill | Gas Bill  | Water Bill   |\n";
    std::cout << "=============================================================\n";

    std::cout << "| "
              << std::left << std::setw(12) << utility.getPropertyId() << " | "
              << std::left << std::setw(17) << utility.getElectricityBill() << " | "
              << std::left << std::setw(9)  << utility.getGasBill() << " | "
              << std::left << std::setw(12) << utility.getWaterBill() << " |\n";

    std::cout << "=============================================================\n";
}
