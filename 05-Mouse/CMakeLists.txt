cmake_minimum_required(VERSION 3.6)
project(05-Mouse)

set(SOURCE_FILES main.cpp)

add_executable(mouse ${SOURCE_FILES})
target_link_libraries(mouse ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
