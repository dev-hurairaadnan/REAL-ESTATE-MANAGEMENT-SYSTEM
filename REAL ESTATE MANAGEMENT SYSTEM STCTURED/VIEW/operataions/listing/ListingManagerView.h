// ListingManagerView.h
#ifndef LISTINGMANAGERVIEW_H
#define LISTINGMANAGERVIEW_H

#include "C:/Users/MMT/CLionProjects/REAL ESTATE MANAGEMENT SYSTEM STCTURED/MODEL/operations/ListingManagerModel.h"
#include <string>

class ListingManagerView {
public:
    void displayListingInfo(const ListingManagerModel& model);

    static bool getYesNoFromUser(const std::string& prompt);
};

#endif
