cmake_minimum_required( VERSION 3.13 )
project( TezzGL )

set( CMAKE_CXX_COMPILER "/usr/bin/clang++" )
set( CMAKE_CXX_STANDARD 14 )

set( GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE )
set( GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE )
set( GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE )
message( STATUS ${CMAKE_SOURCE_DIR})
add_subdirectory(${CMAKE_SOURCE_DIR}/glfw)

find_package( OpenGL REQUIRED )

include_directories( ${CMAKE_SOURCE_DIR}/glfw/include )

#add_library( tezzgl ${CMAKE_SOURCE_DIR}/src/tezzgl.cpp )
#target_include_directories(tezzgl PUBLIC ${CMAKE_SOURCE_DIR}/include )
add_executable( app ${CMAKE_SOURCE_DIR}/src/Main.cpp )
target_include_directories( app PUBLIC ${CMAKE_SOURCE_DIR}/include )

target_link_libraries( app glfw OpenGL::GL )
