cmake_minimum_required(VERSION 3.6)
project(1669_computer_graphics)

set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH  ${CMAKE_SOURCE_DIR}/build)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories(${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS})

add_subdirectory(01-PrimerVentana)
add_subdirectory(02-Primitivas)
add_subdirectory(03-Redimensionar)
add_subdirectory(04-Teclado)
add_subdirectory(05-Mouse)
add_subdirectory(06-Color)
add_subdirectory(07-Rotacion)
add_subdirectory(08-Transformaciones)
add_subdirectory(Tarea-02)
