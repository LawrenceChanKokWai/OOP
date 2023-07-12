#include "../Headers/Staff.h"

Staff::Staff() {
    std::cout << this << " Person --> User --> Staff: CREATED" << std::endl;
}

void Staff::DisplayStaff() {
    std::cout << "Method from Staff" << std::endl;
}

void Staff::role() {
    std::cout << this << " Staff: [READ, WRITE]" << std::endl;
}