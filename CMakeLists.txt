cmake_minimum_required(VERSION 3.1...3.15)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
        cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project (mylib)

project(mylib VERSION 1.0
    DESCRIPTION "my new c++ lib"
    LANGUAGES CXX)


file(GLOB_RECURSE LIB_SRC src/*.cc)
add_library(mylib STATIC ${LIB_SRC})
target_include_directories(mylib PUBLIC include)

file(GLOB_RECURSE TEST_SRC tests/*.cc)
add_executable (test-program ${TEST_SRC})
target_link_libraries(test-program PUBLIC mylib)

include(CTest)
enable_testing()
add_test(NAME unit_tests COMMAND test-program)
