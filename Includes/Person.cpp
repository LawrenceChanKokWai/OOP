#include "../Headers/Person.h"

Person::Person() {
    std::cout << this << " --> Person: CREATED" << std::endl;
}

void Person::DisplayPerson() {
    std::cout << "Method from Person" << std::endl;
}
