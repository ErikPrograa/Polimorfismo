cmake_minimum_required(VERSION 3.28)
project(Polimorfismo)

set(CMAKE_CXX_STANDARD 17)

add_executable(Polimorfismo main.cpp
        Animal.cpp
        Animal.h
        Hipopotamo.cpp
        Hipopotamo.h
        Jirafa.cpp
        Jirafa.h
        Monkey.cpp
        Monkey.h
        Cebra.cpp
        Cebra.h)
