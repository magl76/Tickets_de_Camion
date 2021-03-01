cmake_minimum_required(VERSION 3.17)
<<<<<<< HEAD
project(Examen_1)

set(CMAKE_CXX_STANDARD 20)

add_library(Examen_1 SHARED library.cpp library.h)
=======
project(tarea_2_boletos)

set(CMAKE_CXX_STANDARD 20)

include_directories(/home/gerardo_alipi/CLionProjects/tarea_2_boletos)
link_directories(/home/gerardo_alipi/CLionProjects/tarea_2_boletos/cmake-build-debug)
target_link_libraries(tarea_2_boletos libtarea_2_boletos.so)

add_executable(tarea_2_boletos main.cpp)
>>>>>>> Gerardo
