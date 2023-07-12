#include "../Headers/Admin.h"

Admin::Admin() {
    std::cout << this << " Person --> User --> Admin: CREATED" << std::endl;
}

void Admin::DisplayAdmin() {
    std::cout << "Method from Admin" << std::endl;
}

void Admin::role() {
    std::cout << this << " Admin: [READ, WRITE, UPDATE, DELETE]" << std::endl;
}