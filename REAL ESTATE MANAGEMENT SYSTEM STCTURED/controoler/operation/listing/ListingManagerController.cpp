#include "ListingManagerController.h"
#include <iostream>
using namespace std;



void ListingManagerController::addListing() {
    string propertyId;

    cout << "Enter Property ID: ";
    cin >> propertyId;

   const bool facebook = view.getYesNoFromUser("Listed on Facebook?");
    const bool instagram = view.getYesNoFromUser("Listed on Instagram?");
   const bool zameen = view.getYesNoFromUser("Listed on Zameen.com?");

    model.setPropertyId(propertyId);
    model.setFacebook(facebook);
    model.setInstagram(instagram);
    model.setZameen(zameen);

    if (db.saveListing(model)) {
        cout << "Listing saved successfully.\n";
    } else {
        cout << "Error saving listing.\n";
    }
}

void ListingManagerController::viewAllListings() {
   std::vector<ListingManagerModel> listings = db.loadAllListings();
    for (const auto& listing : listings) {
        view.displayListingInfo(listing);
        cout << "-----------------------------\n";
    }
}
