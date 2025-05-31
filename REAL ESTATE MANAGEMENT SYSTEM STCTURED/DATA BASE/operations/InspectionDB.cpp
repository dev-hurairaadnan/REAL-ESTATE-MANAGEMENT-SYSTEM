#include "InspectionDB.h"
#include <sstream>
using namespace std;
void InspectionDB::saveInspection(const PropertyInspection& inspection) {
    ofstream file("DATA FILES/inspection.csv", ios::app);
    if (file.is_open()) {
        file << inspection.getRegistrationNo() << ","
             << inspection.getMeasuredArea() << ","
             << inspection.getConflict() << "\n";
        file.close();
    }
}

std::vector<PropertyInspection> InspectionDB::loadInspections() {
    std::vector<PropertyInspection> list;
    std::ifstream file("DATA FILES/inspection.csv");
    std::string line;

    while (std::getline(file, line)) {
        std::stringstream ss(line);
        std::string regNo, area, conflict;

        std::getline(ss, regNo, ',');
        std::getline(ss, area, ',');
        std::getline(ss, conflict, ',');

        if (!regNo.empty()) {
            list.emplace_back(regNo, area, conflict);
        }
    }

    file.close();
    return list;
}
