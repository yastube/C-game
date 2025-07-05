cmake_minimum_required(VERSION 3.20)
project(CGame)
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_subdirectory(outside/raylib)

add_library(Engine STATIC
    engine/location.c
    engine/location.h
    engine/window.c
    engine/window.h
)
target_link_libraries(Engine PRIVATE raylib)

add_executable(Game
    src/main.c
)
target_include_directories(Game PRIVATE engine)
target_link_libraries(Game PRIVATE Engine raylib)