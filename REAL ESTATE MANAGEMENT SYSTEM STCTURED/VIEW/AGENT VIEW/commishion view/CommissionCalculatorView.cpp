#include "CommissionCalculatorView.h"
#include <iostream>
#include <limits>
using namespace std;

void CommissionCalculatorView::inputCommissionDetails(int& price, std::string& landType) {
    cout << "\n======= Commission Calculator =======\n";

    cout << "Enter Property Price: ";
    while (!(cin >> price)) {
        cout << "Invalid input. Please enter a numeric price: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cin.ignore(); // flush newline before getline

    cout << "Enter Land Type (e.g., Residential Area / Commercial Plot): ";
    getline(cin, landType);

    cout << "=====================================\n";
}

void CommissionCalculatorView::showCommission(double commission) {
    cout << "\n>>> Calculated Commission: Rs. " << commission << "\n";
}

void CommissionCalculatorView::showError(const std::string& message) {
    cout << "\n[Error] " << message << "\n";
}