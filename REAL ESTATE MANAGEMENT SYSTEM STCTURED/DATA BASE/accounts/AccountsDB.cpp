#include "AccountsDB.h"
#include <fstream>
#include <sstream>

bool AccountsDB::addExpense(const AccountsModel& exp) {
    std::ofstream file(expenseFile, std::ios::app);
    if (!file.is_open()) return false;
    file << exp.expenseReason << "," << exp.expenseAmount << "\n";
    file.close();
    return true;
}

std::vector<AccountsModel> AccountsDB::getAllExpenses() {
    std::vector<AccountsModel> expenses;
    std::ifstream file(expenseFile);
    std::string line;
    while (getline(file, line)) {
        std::istringstream ss(line);
        std::string reason, amountStr;
        int amount;
        getline(ss, reason, ',');
        getline(ss, amountStr);
        amount = std::stoi(amountStr);
        expenses.emplace_back(reason, amount);
    }
    return expenses;
}

bool AccountsDB::addDeal(const AccountsModel& deal) {
    std::ofstream file(dealFile, std::ios::app);
    if (!file.is_open()) return false;
    file << deal.propertyType << "," << deal.area << "," << deal.commission << "\n";
    file.close();
    return true;
}

std::vector<AccountsModel> AccountsDB::getAllDeals() {
    std::vector<AccountsModel> deals;
    std::ifstream file(dealFile);
    std::string line;
    while (getline(file, line)) {
        std::istringstream ss(line);
        std::string type, area, commStr;
        int commission;
        getline(ss, type, ',');
        getline(ss, area, ',');
        getline(ss, commStr);
        commission = std::stoi(commStr);
        deals.emplace_back(type, area, commission);
    }
    return deals;
}
