#include "FeedbackView.h"
#include <iostream>
using namespace std;

Feedback FeedbackView::getFeedbackInput() {
    string customerName, employeeName, department, remark, suggestion;
    int rating;

    cout << "\n=== Submit Feedback ===\n";

    cout << "Enter your full name (Customer): ";
    getline(cin, customerName);

    cout << "Enter the full name of the employee you want to rate: ";
    getline(cin, employeeName);

    cout << "Enter the employee's department: ";
    getline(cin, department);

    cout << "Rate the employee (1: Normal, 2: Average, 3: Good, 4: Very Good, 5: Excellent): ";
    while (!(cin >> rating) || rating < 1 || rating > 5) {
        cout << "Invalid input. Please enter a number between 1 and 5: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    cin.ignore();  // Clear the newline before next getline

    cout << "Write your remark: ";
    getline(cin, remark);

    cout << "Any suggestions for improvement (optional): ";
    getline(cin, suggestion);

    return Feedback(customerName, employeeName, department, rating, remark, suggestion);
}

void FeedbackView::showSuccessMessage(const string& msg) {
    cout << "\n✅ " << msg << endl;
}

void FeedbackView::showAllFeedbacks(const vector<Feedback>& feedbacks) {
    cout << "\n=== All Feedbacks ===\n";
    if (feedbacks.empty()) {
        cout << "No feedbacks found.\n";
        return;
    }

    for (const Feedback& f : feedbacks) {
        cout << "\nCustomer Name     : " << f.getCustomerName()
             << "\nEmployee Rated    : " << f.getEmployeeName()
             << "\nDepartment        : " << f.getDepartment()
             << "\nRating (1-5)      : " << f.getPoints()
             << "\nRemark            : " << f.getRemark()
             << "\nSuggestion        : " << f.getSuggestion()
             << "\n-------------------------------";
    }
    cout << endl;
}
