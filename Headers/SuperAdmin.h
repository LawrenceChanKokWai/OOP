
#include "Admin.h"
#include "Customer.h"
#include "Staff.h"

#ifndef OOP_SUPERADMIN_H
#define OOP_SUPERADMIN_H

class SuperAdmin: public Admin, public Customer, public Staff {
public:
    SuperAdmin();

    bool isAdmin();
    bool isCustomer();
    bool isStaff();
};

#endif //OOP_SUPERADMIN_H
