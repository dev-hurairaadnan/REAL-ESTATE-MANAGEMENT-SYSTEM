//
// Created by Dev.Huraira on 5/25/2025.
//

#ifndef FEEDBACK_VIEW_H
#define FEEDBACK_VIEW_H

#include <string>
#include <vector>
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\agent model\Feedback.h"
using namespace std;

class FeedbackView {
public:
    Feedback getFeedbackInput();
    void showSuccessMessage(const string& msg);
    void showAllFeedbacks(const vector<Feedback>& feedbacks);
};

#endif
