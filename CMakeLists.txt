cmake_minimum_required(VERSION 3.17)
project(tarea_2_boletos)

set(CMAKE_CXX_STANDARD 20)

include_directories(/home/gerardo_alipi/CLionProjects/tarea_2_boletos)
link_directories(/home/gerardo_alipi/CLionProjects/tarea_2_boletos/cmake-build-debug)
target_link_libraries(tarea_2_boletos libTarea_2_Boletos_B.so)

add_executable(tarea_2_boletos main.cpp)