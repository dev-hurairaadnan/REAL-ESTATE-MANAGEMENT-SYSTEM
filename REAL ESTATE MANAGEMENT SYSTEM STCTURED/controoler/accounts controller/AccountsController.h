#ifndef ACCOUNTSCONTROLLER_H
#define ACCOUNTSCONTROLLER_H

#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\DATA BASE\accounts\AccountsDB.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\VIEW\accounts\AccountsView.h"

class AccountsController {
    AccountsDB db;
    AccountsView view;

public:
    void addExpense();
    void viewExpenses();
    void addDeal();
    void viewDeals();
    void predictCommission();
};

#endif
