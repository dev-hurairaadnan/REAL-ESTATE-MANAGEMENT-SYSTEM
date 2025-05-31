// ListingManagerDB.h
#ifndef LISTINGMANAGERDB_H
#define LISTINGMANAGERDB_H

#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\operations\ListingManagerModel.h"
#include <vector>
#include <string>

class ListingManagerDB {
private:
    std::string filename;

public:


    bool saveListing(const ListingManagerModel& model);
    std::vector<ListingManagerModel> loadAllListings();
};

#endif
