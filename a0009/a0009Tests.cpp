#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0009.h"

TEST_CASE( "swapStrings - testing basic string to see if they swap.")
{
    char str1[100] = "Baby";
    char str2[100] = "John";
    swapStrings( str1, str2);
    CHECK( strcmp( str2, "Baby") == 0);
    CHECK( strcmp( str1, "John") == 0);
}

