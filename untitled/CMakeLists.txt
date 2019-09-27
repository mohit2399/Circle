cmake_minimum_required(VERSION 3.14)
project(Circle)

set(CMAKE_CXX_STANDARD 14)
add_executable(Circle main.cpp)
set(CMAKE_CXX_FLAGS "SFML/Graphics.hpp")
set(CMAKE_CXX_FLAGS "-lsfml-graphics -lsfml-window -lsfml-system")

