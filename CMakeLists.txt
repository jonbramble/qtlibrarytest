cmake_minimum_required(VERSION 3.10)
project(moctest)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_PREFIX_PATH "/home/jon/Qt/5.11.1/gcc_64")

enable_testing()
add_subdirectory(client)
add_subdirectory(gui)