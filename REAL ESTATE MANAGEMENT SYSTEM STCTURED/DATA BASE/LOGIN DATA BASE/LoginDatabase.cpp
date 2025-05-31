#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include "LoginDatabase.h"
using namespace std;

bool LoginDatabase::validateUser(string username, string password, login_model_class &loginModel) {
    ifstream file("DATA FILES/HR_RECORD.csv");
    if (!file) {
        cout << "Unable to open HR_RECORD.csv file." << endl;
        return false;
    }

    string line;
    while (getline(file, line)) {
        // Use stringstream to split by commas
        stringstream ss(line);
        string fileUsername, filePassword, fileRole, fileDepartment;

        if (!getline(ss, fileUsername, ',')) continue;
        if (!getline(ss, filePassword, ',')) continue;
        if (!getline(ss, fileRole, ',')) continue;
        if (!getline(ss, fileDepartment, ',')) continue;

        // Trim spaces if needed (optional)

        if (username == fileUsername && password == filePassword) {
            loginModel.setUsername(fileUsername);
            loginModel.setPassword(filePassword);
            loginModel.setRole(fileRole);
            loginModel.setDepartment(fileDepartment);
            return true;
        }
    }
    return false;
}
