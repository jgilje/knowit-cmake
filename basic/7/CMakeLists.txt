cmake_minimum_required(VERSION 3.20)

project(awesome-project-7
    VERSION 0.0
    LANGUAGES CXX
)

add_executable(awesome-project-7
    main.cpp
)

find_library(JOKKIEG_LIBRARY jokkieg-6 REQUIRED)
find_path(JOKKIEG_INCLUDE jokkieg/lib.hpp REQUIRED)

message(STATUS "JOKKIEG_LIBRARY: ${JOKKIEG_LIBRARY}")
message(STATUS "JOKKIEG_INCLUDE: ${JOKKIEG_INCLUDE}")
# message(FATAL_ERROR "JOKKIEG_LIBRARY: ${JOKKIEG_LIBRARY}")

target_include_directories(awesome-project-7 PRIVATE ${JOKKIEG_INCLUDE})
target_link_libraries(awesome-project-7 PRIVATE ${JOKKIEG_LIBRARY})

install(TARGETS awesome-project-7)
