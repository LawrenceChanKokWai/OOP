#include "../Headers/User.h"

User::User() {
    std::cout << this << " Person --> User: CREATED" << std::endl;
}

void User::DisplayUser() {
    std::cout << "Method from User" << std::endl;
}