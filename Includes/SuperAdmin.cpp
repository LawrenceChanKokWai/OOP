
#include "../Headers/SuperAdmin.h"

SuperAdmin::SuperAdmin() {
    std::cout << this << " Super Admin Constructed" << std::endl;
}

bool SuperAdmin::isAdmin() {
    return true;
}

bool SuperAdmin::isCustomer() {
    return true;
}

bool SuperAdmin::isStaff() {
    return true;
}
