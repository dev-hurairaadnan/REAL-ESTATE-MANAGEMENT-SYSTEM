#ifndef ACCOUNTSVIEW_H
#define ACCOUNTSVIEW_H

#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\ACCOUNTS MODEL\AccountsModel.h"
#include <vector>

class AccountsView {
public:
    AccountsModel getExpenseInput();
    void showExpenses(const std::vector<AccountsModel>&);

    AccountsModel getDealInput();
    void showDeals(const std::vector<AccountsModel>&);

    void showMessage(const std::string&);
    void predictCommission();
};

#endif
