cmake_minimum_required(VERSION 3.10)
project(Lab_05_0)

set(CMAKE_CXX_STANDARD 17)

# Підключаємо Google Test
include_directories(~/googletest/googletest/include)
link_directories(~/googletest/build/lib)

# Основний проєкт
add_executable(main src/lab_05_0.cpp)

# Проєкт для тестів
add_executable(tests tests/test_lab_05_0.cpp)

target_link_libraries(tests gtest pthread)
