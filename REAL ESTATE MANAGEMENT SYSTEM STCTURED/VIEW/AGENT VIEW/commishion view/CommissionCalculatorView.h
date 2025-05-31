#ifndef COMMISSION_CALCULATOR_VIEW_H
#define COMMISSION_CALCULATOR_VIEW_H

#include <string>

class CommissionCalculatorView {
public:
    void inputCommissionDetails(int& price, std::string& landType);
    void showCommission(double commission);
    void showError(const std::string& message);
};

#endif
