cmake_minimum_required(VERSION 3.6)
project(linear_search)

enable_language(ASM_NASM)

set(CMAKE_ASM_NASM_FLAGS "${CMAKE_ASM_NASM_FLAGS} -f macho64")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/lib)

set(CMAKE_C_FLAGS "${CMAKE_CXX_FLAGS} -std=c11")
set(CMAKE_C_COMPILER /usr/local/Cellar/gcc/6.1.0/bin/gcc-6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
set(CMAKE_CXX_COMPILER /usr/local/Cellar/gcc/6.1.0/bin/g++-6)

find_package(Boost)
include_directories({Boost_INCLUDE_DIRS})

set(SOURCE_FILES main.cpp linear_search.asm)
add_executable(linear_search ${SOURCE_FILES})