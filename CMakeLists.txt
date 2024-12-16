cmake_minimum_required(VERSION 3.10)
project(Caso_Final_Integrador_4_Roberto_Cardenas)

set(CMAKE_CXX_STANDARD 14)

include_directories(${CMAKE_SOURCE_DIR}/json11)
include_directories(${CMAKE_SOURCE_DIR}/variant)

add_executable(Caso_Final_Integrador_4_Roberto_Cardenas
        main.cpp
        variant/Variant.cpp
        json11/json11.cpp
)