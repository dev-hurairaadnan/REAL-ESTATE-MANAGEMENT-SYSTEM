//
// Created by Dev.Huraira on 5/21/2025.
//

#ifndef PROPERTY_DETAILS_VIEW_CLASS_H
#define PROPERTY_DETAILS_VIEW_CLASS_H
#include "C:\Users\MMT\CLionProjects\REAL ESTATE MANAGEMENT SYSTEM STCTURED\MODEL\agent model\PROPERTY_DETAILS.h"
#include<string>
#include <vector>
using namespace std;


class PROPERTY_DETAILS_VIEW_CLASS {
private:
    vector<PROPERTY_DETAILS> properties;
public:
    PROPERTY_DETAILS PROPERTY_DETAILS_VIEW_INPUT();

    int input_property_idey(int idey_target);
    void input_new_details(int &area, string &landType);
  void display_all_properties();
};
#endif //PROPERTY_DETAILS_VIEW_CLASS_H
