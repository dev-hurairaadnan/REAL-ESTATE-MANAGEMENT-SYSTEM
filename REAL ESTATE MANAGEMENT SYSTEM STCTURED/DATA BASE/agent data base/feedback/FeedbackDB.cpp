#include "FeedbackDB.h"

#include <iostream>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;

void FeedbackDB::saveFeedback(const Feedback& f) {
    // Check if file exists to add header once
    ifstream check("DATA FILES/feedbacks.csv");
    bool fileExists = check.good();
    check.close();

    ofstream file("DATA FILES/feedbacks.csv", ios::app);
    if (file.is_open()) {
        // Add header only once if file is new
        if (!fileExists) {
            file << "\"Customer Name\",\"Employee Name\",\"Department\",\"Points\",\"Remark\",\"Suggestion\"\n";
        }

        file << "\"" << f.getCustomerName() << "\","
             << "\"" << f.getEmployeeName() << "\","
             << "\"" << f.getDepartment() << "\","
             << f.getPoints() << ","  // numeric field doesn’t need quotes
             << "\"" << f.getRemark() << "\","
             << "\"" << f.getSuggestion() << "\"\n";
        file.close();
    }
}
vector<Feedback> FeedbackDB::loadAllFeedbacks() {
    vector<Feedback> feedbacks;
    ifstream file("DATA FILES/feedbacks.csv");
    if (!file.is_open()) {
        return feedbacks;
    }

    string line;
    while (getline(file, line)) {
        stringstream ss(line);
        string customerName, employeeName, department, pointsStr, remark, suggestion;

        getline(ss, customerName, ',');
        getline(ss, employeeName, ',');
        getline(ss, department, ',');
        getline(ss, pointsStr, ',');
        getline(ss, remark, ',');
        getline(ss, suggestion);

        int points = stoi(pointsStr);
        feedbacks.push_back(Feedback(customerName, employeeName, department, points, remark, suggestion));
    }

    file.close();
    return feedbacks;
}
