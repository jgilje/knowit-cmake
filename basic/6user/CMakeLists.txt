cmake_minimum_required(VERSION 3.20)

project(awesome-project-6user
    VERSION 0.0
    LANGUAGES CXX
)

add_executable(awesome-project-6user
    main.cpp
)

target_link_libraries(awesome-project-6user PRIVATE jokkieg-6)

install(TARGETS awesome-project-6user)
