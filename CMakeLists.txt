cmake_minimum_required(VERSION 3.23)
project(one_memory_allocator C)

set(CMAKE_C_STANDARD 99)

add_executable(one_memory_allocator main.c sys_call_sbrk.c sys_call_sbrk.h)
