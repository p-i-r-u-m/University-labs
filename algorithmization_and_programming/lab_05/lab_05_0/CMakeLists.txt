cmake_minimum_required(VERSION 3.10)
project(Lab_05_0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_VERBOSE_MAKEFILE ON)

# Set the path for Google Test
set(GTEST_ROOT /usr/src/googletest)

# Підключаємо Google Test
include_directories(${GTEST_ROOT}/googletest/include)
include_directories(${GTEST_ROOT}/googlemock/include)

# Основний проєкт
add_executable(main src/lab_05_0.cpp)

# Проєкт для тестів
add_executable(tests tests/test_lab_05_0.cpp)

#target_link_libraries(tests ${GTEST_ROOT}/build/lib/libgtest.a ${GTEST_ROOT}/build/lib/libgtest_main.a pthread)

target_link_libraries(tests gtest gtest_main pthread)

target_sources(tests PRIVATE src/lab_05_0.cpp)
