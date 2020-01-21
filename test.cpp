
#include "everything.h"

// #include <cassert>
#include <iostream>
#include <string>

using namespace std;

#define assert(x) if(!(x)) { printf("FAIL: because (%s) is not true.\n", #x); return 1; }

int main()
{
    printf("Running tests...\n");

    assert( string("Hello, World.") == everything() );

    printf("All tests passed!\n");
    return 0;
}
