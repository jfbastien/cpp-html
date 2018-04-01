cmake_minimum_required(VERSION 2.8.11)
project(cpp-html CXX)

function(ADD_COMPILE_FLAG value)
  message(STATUS "Building with ${value}")
  foreach(variable CMAKE_C_FLAGS CMAKE_CXX_FLAGS)
    set(${variable} "${${variable}} ${value}" PARENT_SCOPE)
  endforeach(variable)
endfunction()

add_compile_flag("-Wno-unicode-homoglyph")
add_compile_flag("-std=c++1z")

add_executable(hello "hello.html.cpp")
add_test(hello hello)
