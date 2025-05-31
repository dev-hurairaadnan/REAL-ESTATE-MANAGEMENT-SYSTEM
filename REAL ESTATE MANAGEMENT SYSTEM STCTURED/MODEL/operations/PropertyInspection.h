#ifndef INSPECTION_MODEL_H
#define INSPECTION_MODEL_H

#include <string>

class PropertyInspection {
private:
    std::string registrationNo;
    std::string measuredArea;
    std::string conflict;

public:
    PropertyInspection();
    PropertyInspection(const std::string& regNo, const std::string& area, const std::string& conflict);

    void setRegistrationNo(const std::string& regNo);
    std::string getRegistrationNo() const;

    void setMeasuredArea(const std::string& area);
    std::string getMeasuredArea() const;

    void setConflict(const std::string& conflictStatus);
    std::string getConflict() const;
};
#endif