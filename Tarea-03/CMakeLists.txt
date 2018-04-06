cmake_minimum_required(VERSION 3.6)
project(Tarea-02)

set(SOURCE_FILES main.cpp)

add_executable(tarea3 ${SOURCE_FILES})
target_link_libraries(tarea3 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
