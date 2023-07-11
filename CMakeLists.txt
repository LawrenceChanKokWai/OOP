cmake_minimum_required(VERSION 3.25)
project(OOP)

set(CMAKE_CXX_STANDARD 11)

add_executable(OOP main.cpp Headers/Person.h Includes/Person.cpp Headers/User.h Includes/User.cpp Headers/Admin.h Includes/Admin.cpp Headers/Customer.h Includes/Customer.cpp Headers/Staff.h Includes/Staff.cpp Headers/SuperAdmin.h Includes/SuperAdmin.cpp)
