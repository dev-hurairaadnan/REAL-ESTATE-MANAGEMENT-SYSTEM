#ifndef PROPERTY_DETAILS_H
#define PROPERTY_DETAILS_H

#include <string>
#include <vector>
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\agent model\PROPERTY_DETAILS.h"

using namespace std;

class PROPERTY_DETAILS {
private:
    int area;
    int property_id;
    string land_type;
public:
    PROPERTY_DETAILS();
    PROPERTY_DETAILS(int a, int pid, string l);


    void setArea(int a);
    void setPropertyID(int pid);
    void setLandType(string l);


    int getArea();
    int getPropertyID();
    string getLandType();



};

#endif
