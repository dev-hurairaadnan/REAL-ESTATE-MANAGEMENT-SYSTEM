#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include "LoginView.h"

using namespace std;

void LoginView::getLoginInput(string &username, string &password, string &role, string &dep) {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n";
    cout << "===========================================\n";
    cout << "       Welcome to Real Estate Management System\n";
    cout << "                 Login Page\n";
    cout << "===========================================\n\n";

    cout << left << setw(22) << "Enter Username:";    getline(cin, username);
    cout << left << setw(22) << "Enter Password:";    getline(cin, password);
    cout << left << setw(22) << "Enter Role:";        getline(cin, role);
    cout << left << setw(22) << "Enter Department:";  getline(cin, dep);

    cout << "\nProcessing login...\n";
}

void LoginView::showLoginResult(bool success, string role) {
    cout << "\n===========================================\n";
    if (success) {
        cout << "Login successful!\n";
        cout << "Role: " << role << "\n";
        cout << "Access granted to " << role << " functionalities.\n";
    } else {
        cout << "Invalid username or password. Please try again.\n";
    }
    cout << "===========================================\n";
}

