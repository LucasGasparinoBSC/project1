cmake_minimum_required(VERSION 3.12)

project(project1 LANGUAGES CXX)

file(GLOB SOURCES CONFIGURE_DEPENDS sources/src/*.cpp)
include_directories(sources/include)

add_executable(${PROJECT_NAME} ${SOURCES})