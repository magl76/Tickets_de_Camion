cmake_minimum_required(VERSION 3.17)
project(tarea_2_boletos)

set(CMAKE_CXX_STANDARD 20)

include_directories(/home/gerardo_alipi/CLionProjects/tarea_2_boletos)
link_directories(/home/gerardo_alipi/CLionProjects/tarea_2_boletos/cmake-build-debug)

add_executable(tarea_2_boletos main.cpp)
target_link_libraries(tarea_2_boletos libExamen_1.so)