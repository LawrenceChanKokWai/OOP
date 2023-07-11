#include <iostream>
#include "./Headers/Admin.h"
#include "./Headers/Customer.h"
#include "./Headers/Staff.h"

#include "./Headers/SuperAdmin.h"

int main() {

//    Admin myAdmin;
//    Customer myCustomer;
//    Staff myStaff;

    SuperAdmin mySuperAdmin;

    std::cout << "\n";

    std::cout << "SuperAdmin is a Staff: " << mySuperAdmin.isStaff() << std::endl;
    std::cout << "SuperAdmin is a Admin: " << mySuperAdmin.isAdmin() << std::endl;
    std::cout << "SuperAdmin is a Customer: " << mySuperAdmin.isCustomer() << std::endl;

//    myAdmin.DisplayPerson();
//    myAdmin.DisplayUser();
//    myAdmin.DisplayAdmin();
//    myCustomer.DisplayCustomer();
//    myStaff.DisplayStaff();

    return 0;
}
