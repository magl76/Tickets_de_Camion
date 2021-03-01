cmake_minimum_required(VERSION 3.17)
#<<<<<<< HEAD
project(Examen_1)

set(CMAKE_CXX_STANDARD 20)

add_library(Examen_1 SHARED library.cpp library.h)
#=======
project(tarea_2_boletos)

set(CMAKE_CXX_STANDARD 20)

include_directories(/home/alexandergl76/Documentos/Arquitecturas_Programables/Tarea_2_Boletos_B)
link_directories(/home/alexandergl76/Documentos/Arquitecturas_Programables/Tarea_2_Boletos_B/cmake-build-debug)
add_executable(Tarea_2_Boletos_B main.cpp)# >>>>>>> Gerardo
target_link_libraries(Tarea_2_Boletos_B libExamen_1.so)
