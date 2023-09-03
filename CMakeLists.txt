cmake_minimum_required(VERSION 3.26)
project(Budget_Buckets)

set(CMAKE_CXX_STANDARD 23)

# Specify the source files and headers
set(Sources
        src/Bucket.cpp
        src/User.cpp
        src/main.cpp  # Main should come last in the list
)

set(Headers
        include/Bucket.h
        include/User.h
)

# Create an executable target
add_executable(Budget_Buckets ${Sources} ${Headers})
#add_executable(Budget_Buckets ${Sources})


# Set the include directories for the project
target_include_directories(Budget_Buckets PRIVATE include)