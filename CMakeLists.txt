cmake_minimum_required(VERSION 3.27)
project(Bokes)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Bokes
        Book.cpp
        Book.h
        Librarian.cpp
        Librarian.h
        Library.cpp
        Library.h
        main.cpp
        Student.cpp
        Student.h
        Teacher.cpp
        Teacher.h
        User.cpp
        User.h)
