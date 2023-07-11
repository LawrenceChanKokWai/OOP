#include "../Headers/User.h"

User::User() {
    std::cout << this << " --> User: CREATED" << std::endl;
}

void User::DisplayUser() {
    std::cout << "Method from User" << std::endl;
}