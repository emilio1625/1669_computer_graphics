cmake_minimum_required(VERSION 3.6)
project(06-Color)

set(SOURCE_FILES main.cpp)

add_executable(color ${SOURCE_FILES})
target_link_libraries(color ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
