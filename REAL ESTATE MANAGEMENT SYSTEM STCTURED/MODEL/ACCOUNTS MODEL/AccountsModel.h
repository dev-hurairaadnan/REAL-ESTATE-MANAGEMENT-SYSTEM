#ifndef ACCOUNTSMODEL_H
#define ACCOUNTSMODEL_H

#include <string>
using namespace std;
class AccountsModel {
public:

    string expenseReason;
    int expenseAmount;

   string propertyType;
    string area;
    int commission;

    AccountsModel();
    AccountsModel(std::string reason, int amount); // Expense
    AccountsModel(std::string type, std::string area, int commission); // Deal
};

#endif