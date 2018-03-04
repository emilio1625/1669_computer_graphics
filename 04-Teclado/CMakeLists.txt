cmake_minimum_required(VERSION 3.6)
project(04-Teclado)

set(SOURCE_FILES main.cpp)

add_executable(teclado ${SOURCE_FILES})
target_link_libraries(teclado ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
