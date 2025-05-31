#include "AccountsView.h"
#include <iostream>
#include <iomanip>  // For formatted output
#include <sstream>

using namespace std;

AccountsModel AccountsView::getExpenseInput() {
    string reason, amountStr;
    int amount;

    cout << "Enter expense reason: ";
    getline(cin >> ws, reason);

    cout << "Enter expense amount: ";
    getline(cin, amountStr);
    stringstream(amountStr) >> amount;

    return AccountsModel(reason, amount);
}

void AccountsView::showExpenses(const vector<AccountsModel>& expenses) {
    cout << "\n================= EXPENSE REPORT =================\n";
    cout << left << setw(30) << "Reason" << setw(10) << "Amount" << "\n";
    cout << "--------------------------------------------------\n";
    for (const auto& exp : expenses) {
        cout << left << setw(30) << exp.expenseReason << setw(10) << exp.expenseAmount << "\n";
    }
    cout << "==================================================\n";
}

AccountsModel AccountsView::getDealInput() {
    string type, area, commissionStr;
    int commission;

    cout << "Enter property type (commercial/residential): ";
    getline(cin >> ws, type);

    cout << "Enter area: ";
    getline(cin, area);

    cout << "Enter commission amount: ";
    getline(cin, commissionStr);
    stringstream(commissionStr) >> commission;

    return AccountsModel(type, area, commission);
}

void AccountsView::showDeals(const vector<AccountsModel>& deals) {
    cout << "\n================= DEALS REPORT ===================\n";
    cout << left << setw(20) << "Type" << setw(20) << "Area" << setw(15) << "Commission" << "\n";
    cout << "--------------------------------------------------\n";
    for (const auto& deal : deals) {
        cout << left << setw(20) << deal.propertyType
             << setw(20) << deal.area
             << setw(15) << deal.commission << "\n";
    }
    cout << "==================================================\n";
}

void AccountsView::showMessage(const string& msg) {
    cout << "\n>>> " << msg << "\n";
}

void AccountsView::predictCommission() {
    string type, priceStr;
    int price;

    cout << "Enter land type (commercial/residential): ";
    getline(cin >> ws, type);

    cout << "Enter price: ";
    getline(cin, priceStr);
    stringstream(priceStr) >> price;

    float rate = (type == "commercial") ? 0.10f : 0.05f;
    float commission = price * rate;

    cout << "\nPredicted Commission for " << type << " land ("
         << price << "): " << commission << "\n";
}

