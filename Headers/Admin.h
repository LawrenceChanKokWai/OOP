
#include "./User.h"

#ifndef OOP_ADMIN_H
#define OOP_ADMIN_H

class Admin: public User {
public:
    Admin();

    void DisplayAdmin();

    virtual bool isAdmin() = 0;
};

#endif //OOP_ADMIN_H
