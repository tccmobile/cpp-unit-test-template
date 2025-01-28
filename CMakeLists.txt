cmake_minimum_required(VERSION 3.10)

# Set the project name
project(CPPUnitTestTemplate)

# Add main executable
add_executable(main src/main.cpp)

# Enable testing
enable_testing()

# Add GoogleTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Add test executable
add_executable(runTests tests/test_main.cpp)

# Link test executable against GoogleTest libraries
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)
add_test(NAME runTests COMMAND runTests)