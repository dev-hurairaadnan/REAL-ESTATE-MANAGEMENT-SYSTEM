// ListingManagerModel.cpp
#include "ListingManagerModel.h"

ListingManagerModel::ListingManagerModel()
    : listedOnFacebook(false), listedOnInstagram(false), listedOnZameen(false) {}

void ListingManagerModel::setPropertyId(const std::string& id) {
    propertyId = id;
}

void ListingManagerModel::setFacebook(bool fb) {
    listedOnFacebook = fb;
}

void ListingManagerModel::setInstagram(bool insta) {
    listedOnInstagram = insta;
}

void ListingManagerModel::setZameen(bool zm) {
    listedOnZameen = zm;
}

std::string ListingManagerModel::getPropertyId() const {
    return propertyId;
}

bool ListingManagerModel::isFacebook() const {
    return listedOnFacebook;
}

bool ListingManagerModel::isInstagram() const {
    return listedOnInstagram;
}

bool ListingManagerModel::isZameen() const {
    return listedOnZameen;
}
