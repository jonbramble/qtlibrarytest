if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(TARGET_DIR "debug")
else ()
    set(TARGET_DIR "release")
endif ()

set(SOURCE SHARED client.cpp)

add_library(client ${SOURCE})
target_include_directories(client PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})





