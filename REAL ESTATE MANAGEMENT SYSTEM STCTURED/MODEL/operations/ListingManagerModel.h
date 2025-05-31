#ifndef LISTING_MANAGER_MODEL_H
#define LISTING_MANAGER_MODEL_H

#include <string>

class ListingManagerModel {
private:
    std::string propertyId;
    bool listedOnFacebook;
    bool listedOnInstagram;
    bool listedOnZameen;

public:
    ListingManagerModel();
    ListingManagerModel(const std::string& propertyId, bool fb, bool insta, bool zameen);

    // Setters
    void setPropertyId(const std::string& id);
    void setFacebook(bool fb);
    void setInstagram(bool insta);
    void setZameen(bool zam);

    // Getters
    std::string getPropertyId() const;

    bool isFacebook() const;

    bool isInstagram() const;

    bool isZameen() const;

    bool isListedOnFacebook() const;
    bool isListedOnInstagram() const;
    bool isListedOnZameen() const;
};

#endif // LISTING_MANAGER_MODEL_H
