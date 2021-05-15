cmake_minimum_required(VERSION 3.11)

project(rpg VERSION 1.0)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake")

find_package(SFML 2.5 COMPONENTS system window graphics audio network REQUIRED)

file(GLOB SRCS src/*.c)

add_executable(rpg ${SRCS})

target_link_libraries(rpg csfml-system csfml-window csfml-graphics csfml-audio csfml-network)