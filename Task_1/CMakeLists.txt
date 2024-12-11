cmake_minimum_required(VERSION 3.5.0)
project(Task_1 VERSION 0.1.0 LANGUAGES C CXX)

add_executable(Task_1 functions.cpp main.cpp ivalidation.cpp solution.cpp func.h)

#set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=address")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fsanitize=thread -fno-omit-frame-pointer -O1")

#find_program(CLANG_TIDY_EXE NAMES "clang-tidy" REQUIRED)
#set(CLANG_TIDY_COMMAND "${CLANG_TIDY_EXE}" "-checks=-*,modernize-*")

#set_target_properties(Task_1 PROPERTIES CXX_CLANG_TIDY "${CLANG_TIDY_COMMAND}")
