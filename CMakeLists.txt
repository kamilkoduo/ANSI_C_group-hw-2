cmake_minimum_required(VERSION 3.10)
project(group_hw_2 C)

set(CMAKE_C_STANDARD 99)

add_executable(group_hw_2 src/dll.c src/dll.h tests/test_dll.c )
add_executable(test_priority_queue src/priority_queue.c src/priority_queue.h tests/test_priority_queue.c)
