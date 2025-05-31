#ifndef LISTING_MANAGER_CONTROLLER_H
#define LISTING_MANAGER_CONTROLLER_H
#include "C:/Users/MMT/CLionProjects/REAL ESTATE MANAGEMENT SYSTEM STCTURED/VIEW/operataions/listing/ListingManagerView.h"
#include "C:/Users/MMT/CLionProjects/REAL ESTATE MANAGEMENT SYSTEM STCTURED/MODEL/operations/ListingManagerModel.h"
#include "C:/Users/MMT/CLionProjects/REAL ESTATE MANAGEMENT SYSTEM STCTURED/MODEL/operations/ListingManagerModel.h"
#include "C:/Users/MMT/CLionProjects/REAL ESTATE MANAGEMENT SYSTEM STCTURED/DATA BASE/operations/ListingManagerDB.h"
#include "C:/Users/MMT/CLionProjects/REAL ESTATE MANAGEMENT SYSTEM STCTURED/VIEW/operataions/listing/ListingManagerView.h"
#include "C:/Users/MMT/CLionProjects/REAL ESTATE MANAGEMENT SYSTEM STCTURED/VIEW/operataions/listing/ListingManagerView.h"
#include <string>
#include <vector>

class ListingManagerController {
private:
    ListingManagerModel model;
    ListingManagerView view;
    ListingManagerDB db;

public:
    void addListing();

    void viewAllListings();


};

#endif
