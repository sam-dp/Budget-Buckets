cmake_minimum_required(VERSION 3.26)
project(Budget_Buckets)

set(CMAKE_CXX_STANDARD 23)

add_executable(Budget_Buckets src/main.cpp
        src/bucket.cpp
        src/user.cpp
        include/bucket.h
        include/user.h)
