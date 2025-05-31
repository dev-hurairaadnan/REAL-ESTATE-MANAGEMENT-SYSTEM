#ifndef CUSTOMER_DETAILS_H
#define CUSTOMER_DETAILS_H

#include <string>
using namespace std;

class CUSTOMER_DETAILS {
private:
    string name;
    int contact_no;
    string land_type;
    int area;

public:
    CUSTOMER_DETAILS();
    CUSTOMER_DETAILS(string n, int c, string l, int a);


    void setName(string n);
    void setContactNo(int c);
    void setLandType(string l);
    void setArea(int a);

    string getName() const;
    int getContactNo() const;
    string getLandType() const;
    int getArea() const;
};


#endif
