cmake_minimum_required(VERSION 3.15...3.25)

project(MyProject
  VERSION
    1.0
  DESCRIPTION
    "Very nice project"
  LANGUAGES
    C #CXX
)

# Specify the C standard 
set(CMAKE_C_STANDARD 11) 
set(CMAKE_C_STANDARD_REQUIRED True)

# Specify the C++ standard 
# set(CMAKE_CXX_STANDARD 11) 
# set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${CMAKE_SOURCE_DIR}/incl)

add_executable(myexample src/main.c src/problem.c)