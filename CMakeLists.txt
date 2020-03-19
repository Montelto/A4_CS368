cmake_minimum_required(VERSION 3.15)
project(A4_CS368)

set(CMAKE_CXX_STANDARD 11)

add_executable(A4_CS368 Person.cpp Employee.cpp Student.cpp Faculty.cpp TeachingAssistant.cpp DisplayUtility.cpp demo.cpp Person.h Employee.h Student.h Faculty.h TeachingAssistant.h DisplayUtility.h)