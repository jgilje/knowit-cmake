cmake_minimum_required(VERSION 3.20)

project(awesome-project-9
    VERSION 0.0
    LANGUAGES CXX
)

add_library(jokkieg-9 SHARED
    jokkieg/lib.cpp
)

add_executable(awesome-project-9
    main.cpp
)

target_link_libraries(awesome-project-9 PRIVATE jokkieg-9)

install(TARGETS awesome-project-9 COMPONENT awesome-project-9)
install(TARGETS jokkieg-9 EXPORT jokkieg-9 COMPONENT jokkieg-9)
install(FILES jokkieg/lib.hpp DESTINATION include/jokkieg COMPONENT jokkieg-9)
install(EXPORT jokkieg-9
    FILE jokkieg-9-config.cmake
    NAMESPACE jokkieg-9::
    DESTINATION lib/cmake/jokkieg-9
    COMPONENT jokkieg-9
)

include (CPack)
