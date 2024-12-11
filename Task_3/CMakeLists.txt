cmake_minimum_required(VERSION 3.5.0)
project(Task_3 VERSION 0.1.0 LANGUAGES C CXX)
set(CMAKE_CXX_COMPILER "clang++")

add_executable(Task_3 functions.cpp ivalidation.cpp main.cpp solution.cpp)

#set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
#set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=thread")

#find_program(CLANG_TIDY_EXE NAMES "clang-tidy" REQUIRED)
#set(CLANG_TIDY_COMMAND "${CLANG_TIDY_EXE}" "-checks=-*,modernize-*")

#set_target_properties(Task_3 PROPERTIES CXX_CLANG_TIDY "${CLANG_TIDY_COMMAND}")
