//
// Updated by Dev.Huraira on 5/29/2025
//

#include "ListingManagerDB.h"
#include <fstream>
#include <iostream>

using namespace std;

bool ListingManagerDB::saveListing(const ListingManagerModel& model) {
    ofstream file("DATA FILES/listingmanager.csv", ios::app);
    if (!file.is_open()) {
        cout << "Failed to open listingmanager.csv for appending." << endl;
        return false;
    }

    file << model.getPropertyId() << ","
         << model.isFacebook() << ","
         << model.isInstagram() << ","
         << model.isZameen() << "\n";

    file.close();
    cout << "Listing saved successfully." << endl;
    return true;
}

vector<ListingManagerModel> ListingManagerDB::loadAllListings() {
    ifstream file("DATA FILES/listingmanager.csv");
    vector<ListingManagerModel> listings;

    if (!file.is_open()) {
        cout << "Failed to open listingmanager.csv for reading." << endl;
        return listings;
    }

    string id;
    int fb, insta, zm;
    char comma; // to discard commas during input

    while (file >> id >> comma >> fb >> comma >> insta >> comma >> zm) {
        ListingManagerModel model;
        model.setPropertyId(id);
        model.setFacebook(fb);
        model.setInstagram(insta);
        model.setZameen(zm);
        listings.push_back(model);
    }

    file.close();
    return listings;
}
