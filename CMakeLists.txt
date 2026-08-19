# 1. Minimum CMake version required
cmake_minimum_required(VERSION 3.10)

# 2. Project name and language
project(MyProjectName CXX)

# 3. Specify the C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 4. Add your executable (this is what you will compile)
#    "MyExecutableName" is what your program will be called
#    "main.cpp" is your source file
add_executable(MAIN main.cpp)