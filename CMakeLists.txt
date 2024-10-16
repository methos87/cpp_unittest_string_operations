cmake_minimum_required(VERSION 3.10)  # CMake minimális verziójának a meghatározása
project(StringOperations VERSION 1.0)  # A projekt nevének és verziójának a definiálása

# C++ standard verzió megadása
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# include könyvtár megadása
include_directories(include)

# Source és test fájlok megadása
set(SOURCE_FILES src/main.cpp)
set(TEST_FILES tests/string_operations_test.cpp)

# Futatható fájl létrehozása a forrásfájlokból
add_executable(main_program ${SOURCE_FILES})

# Google Test hozzáadása
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Futathatók megadása a tesztekhez
add_executable(run_tests ${TEST_FILES})
target_link_libraries(run_tests ${GTEST_LIBRARIES} pthread)

# Teszt megadása
add_test(NAME StringOperationsTest COMMAND run_tests)