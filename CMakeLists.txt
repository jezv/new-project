cmake_minimum_required (VERSION 2.8)
project (RandomAccessEncoding)

set (RandomAccessEncoding_VERSION_MAJOR 1)
set (RandomAccessEncoding_VERSION_MINOR 0)

add_executable (everything main.cpp everything.cpp)
add_executable (tests test.cpp everything.cpp)

include(CTest)
enable_testing()
add_test(NAME unit_tests COMMAND tests)
add_test(NAME everything COMMAND everything cmd line args here)
