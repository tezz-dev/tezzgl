cmake_minimum_required( VERSION 3.1 )
project( TezzGL )

set( GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE )
set( GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE )
set( GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE )

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

find_package( OpenGL REQUIRED )
find_package( glfw3 REQUIRED )

file(GLOB LIB_SOURCES include/tezzgl/*.hpp src/*.cpp)
file(GLOB TEST_SOURCES tests/*.cpp)

add_library( 
    tezzgl 
    ${LIB_SOURCES}
)

install(TARGETS tezzgl DESTINATION lib)
install(DIRECTORY include/tezzgl DESTINATION include)

target_include_directories(tezzgl PUBLIC ${CMAKE_SOURCE_DIR}/include /usr/local/include )
add_executable( tezzgl_tests ${TEST_SOURCES} )
target_include_directories( tezzgl_tests PUBLIC ${CMAKE_SOURCE_DIR}/include )

target_link_libraries( tezzgl glfw OpenGL::GL )
target_link_libraries( tezzgl_tests tezzgl )
