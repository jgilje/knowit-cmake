cmake_minimum_required(VERSION 3.20)

project(awesome-project-5
    VERSION 0.0
    LANGUAGES CXX
)

add_library(jokkieg-5 SHARED
    jokkieg/lib.cpp
)

add_executable(awesome-project-5
    main.cpp
)

target_link_libraries(awesome-project-5 PRIVATE jokkieg-5)

install(TARGETS awesome-project-5 jokkieg-5)
