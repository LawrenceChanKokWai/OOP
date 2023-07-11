#include "./User.h"

#ifndef OOP_STAFF_H
#define OOP_STAFF_H

class Staff: public User {
public:
    Staff();

    void DisplayStaff();

    virtual bool isStaff() = 0;
};

#endif //OOP_STAFF_H
