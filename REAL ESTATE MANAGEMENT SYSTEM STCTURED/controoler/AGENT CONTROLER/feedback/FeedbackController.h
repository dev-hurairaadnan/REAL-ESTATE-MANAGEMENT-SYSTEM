//
// Created by Dev.Huraira on 5/25/2025.
//

#ifndef FEEDBACK_CONTROLLER_H
#define FEEDBACK_CONTROLLER_H

#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\VIEW\AGENT VIEW\feed back view\FeedbackView.h"
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\DATA BASE\agent data base\feedback\FeedbackDB.h"

class FeedbackController {
    FeedbackView view;
    FeedbackDB db;

public:
    void giveFeedback();
    void viewFeedbackReport();
};

#endif
