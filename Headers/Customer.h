#include "./User.h"

#ifndef OOP_CUSTOMER_H
#define OOP_CUSTOMER_H

class Customer: public User {
public:
    Customer();

    void DisplayCustomer();

    virtual bool isCustomer() = 0;
};

#endif //OOP_CUSTOMER_H
