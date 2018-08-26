set(CMAKE_CXX_STANDARD 14)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
find_package(Qt5Widgets)

set(SOURCE main_window.cpp main_window.hpp main.cpp)
add_executable(moctest ${SOURCE})

target_link_libraries(moctest Qt5::Widgets client)
