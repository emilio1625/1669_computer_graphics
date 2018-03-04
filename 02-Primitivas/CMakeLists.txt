cmake_minimum_required(VERSION 3.6)
project(02-Primitivas)

set(SOURCE_FILES main.cpp)

add_executable(primitivas ${SOURCE_FILES})
target_link_libraries(primitivas ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
