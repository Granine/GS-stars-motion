cmake_minimum_required(VERSION 3.10)

project(star_simulation_system LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(star_simulation_system star_store.cpp star.cpp)