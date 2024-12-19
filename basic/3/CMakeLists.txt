cmake_minimum_required(VERSION 3.20)

project(awesome-project-3
    VERSION 0.0
    LANGUAGES CXX
)

add_library(jokkieg-3
    jokkieg/lib.cpp
)

add_executable(awesome-project-3
    main.cpp
)

target_link_libraries(awesome-project-3 PRIVATE jokkieg-3)
