// ListingManagerView.cpp
#include "ListingManagerView.h"
#include <iostream>
// ListingManagerView.cpp
#include "ListingManagerView.h"
#include <iostream>
#include <string>
#include <algorithm>  // for transform
void ListingManagerView::displayListingInfo(const ListingManagerModel& model) {
    std::cout << "\n==================== Property Listing Info ====================\n";
    std::cout << "| Property ID | Facebook | Instagram | Zameen.com |\n";
    std::cout << "===============================================================\n";

    std::cout << "| " << model.getPropertyId();

    int spaceAfterID = 12 - model.getPropertyId().length();
    for (int i = 0; i < spaceAfterID; ++i) std::cout << " ";

    std::cout << "| " << (model.isFacebook() ? "Yes" : " No") << "     ";
    std::cout << "| " << (model.isInstagram() ? "Yes" : " No") << "     ";
    std::cout << "| " << (model.isZameen() ? "Yes" : " No") << "      |\n";

    std::cout << "===============================================================\n";
}

bool ListingManagerView::getYesNoFromUser(const std::string& prompt) {
    std::string input;
    while (true) {
        std::cout << prompt << " (y/n): ";
        std::getline(std::cin, input);

        if (input == "y" || input == "Y") {
            return true;
        } else if (input == "n" || input == "N") {
            return false;
        } else {
            std::cout << "Invalid input. Please enter 'y' or 'n'.\n";
        }
    }
}

