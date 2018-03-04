cmake_minimum_required(VERSION 3.6)
project(03-Redimensionar)

set(SOURCE_FILES main.cpp)

add_executable(redimensionar ${SOURCE_FILES})
target_link_libraries(redimensionar ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
