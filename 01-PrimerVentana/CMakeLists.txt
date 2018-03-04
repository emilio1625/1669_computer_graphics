cmake_minimum_required(VERSION 3.6)
project(01-PrimerVentana)

set(SOURCE_FILES main.cpp)

add_executable(primer_ventana ${SOURCE_FILES})
target_link_libraries(primer_ventana ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})

