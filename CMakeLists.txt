cmake_minimum_required(VERSION 3.15)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

project(POS)

add_executable(
  ${PROJECT_NAME} src/core/Main.cpp src/employee/Auth.cpp src/employee/Employee.cpp
  src/core/Application.cpp src/employee/Signin.cpp src/utility/Buffer.cpp
  src/system/System.cpp src/inventory/Inventory.cpp src/utility/Utility.cpp
  src/records/Receipt.cpp src/records/Customer.cpp src/records/Records.cpp
  src/checkout/Checkout.cpp)
target_include_directories(${PROJECT_NAME} PUBLIC /include)
