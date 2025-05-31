#ifndef ACCOUNTSDB_H
#define ACCOUNTSDB_H

#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\ACCOUNTS MODEL\AccountsModel.h"
#include <vector>
using namespace std;

class AccountsDB {
    string expenseFile = "DATA FILES/expenses.csv";
    string dealFile = "DATA FILES/deals.csv";

public:
    bool addExpense(const AccountsModel& exp);
    std::vector<AccountsModel> getAllExpenses();

    bool addDeal(const AccountsModel& deal);
    std::vector<AccountsModel> getAllDeals();
};

#endif
