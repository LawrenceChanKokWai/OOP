
#include "../Headers/Customer.h"

Customer::Customer() {
    std::cout << this << " Person --> User --> Customer: CREATED" << std::endl;
}

void Customer::DisplayCustomer() {
    std::cout << "Method from Customer" <<std::endl;
}