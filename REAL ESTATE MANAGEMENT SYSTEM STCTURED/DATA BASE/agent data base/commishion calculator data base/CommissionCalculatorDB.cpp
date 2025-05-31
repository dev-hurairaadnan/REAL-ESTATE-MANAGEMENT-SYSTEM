#include "CommissionCalculatorDB.h"
#include <iostream>
#include <fstream>
using namespace std;

bool CommissionCalculatorDB::saveCommission(const CommissionCalculatorModel &model) {
    ofstream file("DATA FILES/commission_history.csv", ios::app);
    if (!file.is_open()) {
        cout << "Error: Could not open file to save commission.\n";
        return false;
    }
    file << model.getPrice() << "," 
         << model.getLandType() << "," 
         << model.getCommission() << "\n";
    file.close();
    return true;
}

void CommissionCalculatorDB::showHistory() {
    ifstream file("DATA FILES/commission_history.csv");
    if (!file.is_open()) {
        cout << "No commission history found.\n";
        return;
    }

    string line;
    cout << "Commission History:\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}