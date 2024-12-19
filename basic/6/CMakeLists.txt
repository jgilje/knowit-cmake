cmake_minimum_required(VERSION 3.20)

project(awesome-project-6
    VERSION 0.0
    LANGUAGES CXX
)

add_library(jokkieg-6 SHARED
    jokkieg/lib.cpp
)

add_executable(awesome-project-6
    main.cpp
)

target_link_libraries(awesome-project-6 PRIVATE jokkieg-6)

install(TARGETS awesome-project-6 jokkieg-6)
install(FILES jokkieg/lib.hpp DESTINATION include/jokkieg)
