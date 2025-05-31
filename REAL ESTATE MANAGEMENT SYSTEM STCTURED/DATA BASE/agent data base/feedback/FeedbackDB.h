//
// Created by Dev.Huraira on 5/25/2025.
//
#ifndef FEEDBACK_DB_H
#define FEEDBACK_DB_H

#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\agent model\Feedback.h"
#include <vector>
using namespace std;

class FeedbackDB {
public:
    void saveFeedback(const Feedback& feedback);
    vector<Feedback> loadAllFeedbacks();
};

#endif
