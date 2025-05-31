#include "FeedbackController.h"

void FeedbackController::giveFeedback() {
    Feedback feedback = view.getFeedbackInput();
    db.saveFeedback(feedback);
    view.showSuccessMessage("Feedback saved successfully.");
}

void FeedbackController::viewFeedbackReport() {
    vector<Feedback> feedbacks = db.loadAllFeedbacks();
    view.showAllFeedbacks(feedbacks);
}
