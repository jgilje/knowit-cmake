cmake_minimum_required(VERSION 3.20)

project(awesome-project-8user
    VERSION 0.0
    LANGUAGES CXX
)

find_package(jokkieg-8 REQUIRED)

add_executable(awesome-project-8user
    main.cpp
)

target_link_libraries(awesome-project-8user PRIVATE jokkieg-8::jokkieg-8)
