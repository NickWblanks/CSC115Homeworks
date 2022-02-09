#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0003.h"

TEST_CASE( "countCharacters - Testing 1 letter" )

{
    string test = "a";
    int count;
    char ch = 'a';
    count = countCharacters( test, ch);
    REQUIRE( count == 1);
}


