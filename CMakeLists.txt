cmake_minimum_required(VERSION 3.17)
project(untitled)
set(CMAKE_CXX_STANDARD 14)

add_executable(untitled library.cpp library.h)

find_package(OpenCV REQUIRED core imgproc highgui)
set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui)
target_link_libraries(untitled ${OpenCV_LIBS})
