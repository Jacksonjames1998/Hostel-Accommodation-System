cmake_minimum_required(VERSION 3.10)
project(Hostel_management)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add the executable
add_executable(Hostel_management main.cpp)

# Include MySQL headers
target_include_directories(Hostel_management PRIVATE /usr/include/mysql)

# Link MySQL libraries
target_link_libraries(Hostel_management /usr/lib/x86_64-linux-gnu/libmysqlclient.so)
