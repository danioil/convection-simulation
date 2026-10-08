cmake_minimum_required(VERSION 3.28)
project(ConvectionSimulation LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

include(FetchContent)
FetchContent_Declare(SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 3.0.2
    GIT_SHALLOW ON
    EXCLUDE_FROM_ALL
    SYSTEM)
FetchContent_MakeAvailable(SFML)

add_executable(convection src/main.cpp "src/Vec2.h" src/Vec2.cpp)
target_compile_features(convection PRIVATE cxx_std_17)
target_link_libraries(convection PRIVATE SFML::Graphics)