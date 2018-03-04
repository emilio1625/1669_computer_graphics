cmake_minimum_required(VERSION 3.6)
project(07-Rotacion)

set(SOURCE_FILES main.cpp)

add_executable(rotacion ${SOURCE_FILES})
target_link_libraries(rotacion ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
