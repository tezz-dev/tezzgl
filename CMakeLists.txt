cmake_minimum_required( VERSION 3.13 )
project( TezzGL )

set( GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE )
set( GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE )
set( GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE )

find_package( OpenGL REQUIRED )
find_package( glfw3 REQUIRED )

add_library( 
    tezzgl 
    ${CMAKE_SOURCE_DIR}/src/Artist.cc 
    ${CMAKE_SOURCE_DIR}/src/GammaRamp.cc 
    ${CMAKE_SOURCE_DIR}/src/Monitor.cc 
    ${CMAKE_SOURCE_DIR}/src/Timer.cc 
    ${CMAKE_SOURCE_DIR}/src/Window.cc 
)
target_include_directories(tezzgl PUBLIC ${CMAKE_SOURCE_DIR}/include )
add_executable( app ${CMAKE_SOURCE_DIR}/test/Main.cpp )
target_include_directories( app PUBLIC ${CMAKE_SOURCE_DIR}/include )

target_link_libraries( app glfw OpenGL::GL )
