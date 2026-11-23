cmake_minimum_required(VERSION 3.16)
project(rob-run-money-farm CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(robrunmoneyfarm
    src/main.cpp
    src/routes.cpp
    src/tracker.cpp
    src/stats.cpp
)

target_include_directories(robrunmoneyfarm PRIVATE include)

if(WIN32)
    target_link_libraries(robrunmoneyfarm PRIVATE userenv)
endif()
