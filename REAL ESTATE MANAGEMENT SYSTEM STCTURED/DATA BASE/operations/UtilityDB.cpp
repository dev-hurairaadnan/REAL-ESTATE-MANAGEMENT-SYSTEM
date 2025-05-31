#include "UtilityDB.h"

#include <iostream>
#include <fstream>
#include <sstream>
void UtilityDB::saveUtility(const UtilityBill& utility) {
    std::ofstream file("DATA FILES/Utilitis.csv", std::ios::app);
    if (file) {
        file << utility.getPropertyId() << ","
             << utility.getElectricityBill() << ","
             << utility.getGasBill() << ","
             << utility.getWaterBill() << "\n";
        file.close();
        std::cout << "Utility bill saved successfully." << std::endl;
    } else {
        std::cout << "Failed to open Utilitis.csv for writing." << std::endl;
    }
}

std::vector<UtilityBill> UtilityDB::loadUtilities() {
    std::vector<UtilityBill> utilities;
    std::ifstream file("DATA FILES/Utilitis.csv");

    if (!file) {
        std::cout << "Failed to open file for reading.\n";
        return utilities;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string id, elec, gas, water;

        std::getline(ss, id, ',');
        std::getline(ss, elec, ',');
        std::getline(ss, gas, ',');
        std::getline(ss, water, ',');

        utilities.emplace_back(id, elec, gas, water);
    }

    return utilities;
}
