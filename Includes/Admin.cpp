#include "../Headers/Admin.h"

Admin::Admin() {
    std::cout << this << " Person --> User --> Admin: CREATED" << std::endl;
}

void Admin::DisplayAdmin() {
    std::cout << "Method from Admin" << std::endl;
}