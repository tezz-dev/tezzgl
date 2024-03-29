################## CMAKE FOR TEZZGL ##################
cmake_minimum_required( VERSION 3.1 )

###################### PROJECT #######################
project( tezzgl )

##################### GLFW FLAGS ##################### 
set( GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE )
set( GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE )
set( GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE )

###################### C++ FLAGS #####################
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

############## DEPENDENCIES FOR TEZZGL ###############
find_package( OpenGL REQUIRED )
find_package( glfw3 REQUIRED )

############### SOURCE FILES FOR TEZZGL ##############
file(GLOB LIB_SOURCES include/tezzgl/*.hpp src/*.cpp)

##################### TEST FILES #####################
file(GLOB TEST_SOURCES tests/*.cpp)

################ CREATE LIBRARY TEZZGL ###############
add_library( tezzgl ${LIB_SOURCES} )

######### SET INCLUDE DIRECTORIES FOR TEZZGL #########
target_include_directories(
    tezzgl 
    PUBLIC 
    ${CMAKE_SOURCE_DIR}/include 
    /usr/local/include
)
########## LINK GLFW AND OPENGL FOR TEZZGL ###########
target_link_libraries( tezzgl glfw OpenGL::GL )

######## SETUP GOOGLETEST LIBRARY FOR TESTING ########
include(FetchContent)
FetchContent_Declare(
    googletestlib
    URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
set(BUILD_GMOCK OFF CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletestlib)

######## SETUP TEZZGL AS A LIBRARY FOR TESTING #######
install(TARGETS tezzgl DESTINATION lib)

########### INCLUDE THE HEADERS OF TEZZGL ############
install(DIRECTORY include/tezzgl DESTINATION include)

################### ENABLE TESTING ###################
enable_testing()

########## CREATE AN EXECUTABLE FOR TESTING ########## 
add_executable( tezzgl_tests ${TEST_SOURCES} )

################### INCLUDE TEZZGL ###################
target_include_directories( 
    tezzgl_tests 
    PUBLIC 
    ${CMAKE_SOURCE_DIR}/include 
)

############# LINK TEZZGL AND GOOGLETEST #############
target_link_libraries( 
    tezzgl_tests 
    tezzgl 
    gtest_main 
)

################## CODE COVERAGE #####################
find_program(GCOV_PATH gcov)
target_compile_options(tezzgl_tests PUBLIC "--coverage")
target_link_options(tezzgl_tests INTERFACE "--coverage")
set(CMAKE_CXX_FLAGS "-g -O0 --coverage -fprofile-arcs -ftest-coverage")
set(CMAKE_C_FLAGS "-g -O0 --coverage -fprofile-arcs -ftest-coverage")

################ ADD TESTS TO GTEST ##################
include(GoogleTest)
gtest_discover_tests(tezzgl_tests PROPERTIES LABELS "unit")
