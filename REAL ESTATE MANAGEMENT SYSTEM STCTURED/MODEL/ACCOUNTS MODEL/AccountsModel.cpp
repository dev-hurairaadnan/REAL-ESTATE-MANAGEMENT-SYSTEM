#include "AccountsModel.h"

AccountsModel::AccountsModel() {
    expenseReason = "";
    expenseAmount = 0;
    propertyType = "";
    area = "";
    commission = 0;
}

AccountsModel::AccountsModel(std::string reason, int amount) {
    expenseReason = reason;
    expenseAmount = amount;
    propertyType = "";
    area = "";
    commission = 0;
}

AccountsModel::AccountsModel(std::string type, std::string area, int commission) {
    propertyType = type;
    this->area = area;
    this->commission = commission;
    expenseReason = "";
    expenseAmount = 0;
}
