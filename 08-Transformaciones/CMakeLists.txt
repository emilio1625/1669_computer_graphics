cmake_minimum_required(VERSION 3.6)
project(08-Transformaciones)

set(SOURCE_FILES main.cpp)

add_executable(transformaciones ${SOURCE_FILES})
target_link_libraries(transformaciones ${OPENGL_LIBRARIES} ${GLUT_LIBRARY})
