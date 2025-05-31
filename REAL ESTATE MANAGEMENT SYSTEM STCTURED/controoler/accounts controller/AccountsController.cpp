#include "AccountsController.h"

void AccountsController::addExpense() {
    AccountsModel exp = view.getExpenseInput();
    if (db.addExpense(exp))
        view.showMessage("Expense added successfully.");
    else
        view.showMessage("Failed to add expense.");
}

void AccountsController::viewExpenses() {
    std::vector<AccountsModel> expenses = db.getAllExpenses();
    view.showExpenses(expenses);
}

void AccountsController::addDeal() {
    AccountsModel deal = view.getDealInput();
    if (db.addDeal(deal))
        view.showMessage("Deal added successfully.");
    else
        view.showMessage("Failed to add deal.");
}

void AccountsController::viewDeals() {
    std::vector<AccountsModel> deals = db.getAllDeals();
    view.showDeals(deals);
}

void AccountsController::predictCommission() {
    view.predictCommission();
}
