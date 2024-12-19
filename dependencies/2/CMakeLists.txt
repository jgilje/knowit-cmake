# https://github.com/aminya/project_options
# https://github.com/aminya/cpp_vcpkg_project
cmake_minimum_required(VERSION 3.30)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED On)
set(CMAKE_CXX_EXTENSIONS Off)

include(FetchContent)
set(PROJECT_OPTIONS_VERSION "v0.41.0")
FetchContent_Declare(
  _project_options
  URL https://github.com/aminya/project_options/archive/refs/tags/${PROJECT_OPTIONS_VERSION}.zip)

FetchContent_MakeAvailable(_project_options)
include(${_project_options_SOURCE_DIR}/Index.cmake)

run_vcpkg(
  VCPKG_URL "https://github.com/microsoft/vcpkg.git"
  VCPKG_REV "2dc91c6439568f694052c3fa25859dc78d9ff8e4"
  VCPKG_DIR "${CMAKE_BINARY_DIR}/vcpkg"
)

project(awesome-project
    VERSION 0.0
    LANGUAGES CXX
)


if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    # set(ENABLE_CLANG_TIDY "ENABLE_CLANG_TIDY")
    set(ENABLE_COVERAGE "ENABLE_VS_ANALYSIS")
    set(ENABLE_SANITIZER_ADDRESS "ENABLE_SANITIZER_ADDRESS")
    set(ENABLE_SANITIZER_UNDEFINED "ENABLE_SANITIZER_UNDEFINED")
endif()

# Initialize project_options variable related to this project
# This overwrites `project_options` and sets `project_warnings`
# uncomment to enable the options. Some of them accept one or more inputs:
project_options(
  # defines my_project_options/my_project_warnings
  PREFIX
  "awesome"
  ENABLE_CACHE
  ${ENABLE_CPPCHECK}
  ${ENABLE_CLANG_TIDY}
  ${ENABLE_VS_ANALYSIS}
  # ENABLE_CONAN
  # ENABLE_INTERPROCEDURAL_OPTIMIZATION
  # ENABLE_NATIVE_OPTIMIZATION
  ${ENABLE_DOXYGEN}
  ${ENABLE_COVERAGE}
  ${ENABLE_SANITIZER_ADDRESS}
  ${ENABLE_SANITIZER_UNDEFINED_BEHAVIOR}
  # ${ENABLE_SANITIZER_THREAD}
  # ${ENABLE_SANITIZER_MEMORY}
  # ENABLE_CONTROL_FLOW_PROTECTION
  # ENABLE_STACK_PROTECTION
  # ENABLE_OVERFLOW_PROTECTION
  # ENABLE_ELF_PROTECTION
  # ENABLE_RUNTIME_SYMBOLS_RESOLUTION
  # ENABLE_COMPILE_COMMANDS_SYMLINK
  # ENABLE_PCH
  # PCH_HEADERS
  # WARNINGS_AS_ERRORS/home/jgilje/src/cmake/dependencies/2/main.cpp:8
  # ENABLE_INCLUDE_WHAT_YOU_USE
  # ENABLE_GCC_ANALYZER
  # ENABLE_BUILD_WITH_TIME_TRACE
  # ENABLE_UNITY
  # LINKER "lld"
  # CONAN_PROFILE ${profile_path}
)

find_package(Drogon CONFIG REQUIRED)

add_executable(main
    main.cpp
)

target_link_libraries(main PRIVATE Drogon::Drogon)
target_link_libraries(main PRIVATE awesome_project_options awesome_project_warnings)
