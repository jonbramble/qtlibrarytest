set(SOURCE SHARED client.cpp)

add_library(client ${SOURCE})
target_include_directories(client PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})





