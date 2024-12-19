cmake_minimum_required(VERSION 3.20)

project(awesome-project-8
    VERSION 0.0
    LANGUAGES CXX
)

add_library(jokkieg-8 SHARED
    jokkieg/lib.cpp
)

add_executable(awesome-project-8
    main.cpp
)

target_link_libraries(awesome-project-8 PRIVATE jokkieg-8)

install(TARGETS awesome-project-8)
install(TARGETS jokkieg-8 EXPORT jokkieg-8)
install(FILES jokkieg/lib.hpp DESTINATION include/jokkieg)
install(EXPORT jokkieg-8
    FILE jokkieg-8-config.cmake
    NAMESPACE jokkieg-8::
    DESTINATION lib/cmake/jokkieg-8
)
