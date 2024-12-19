cmake_minimum_required(VERSION 3.20)

project(awesome-project-4
    VERSION 0.0
    LANGUAGES CXX
)

add_library(jokkieg-4 SHARED
    jokkieg/lib.cpp
)

add_executable(awesome-project-4
    main.cpp
)

target_link_libraries(awesome-project-4 PRIVATE jokkieg-4)
