#define CATCH_CONFIG_MAIN
#include ..\\catch.hpp
#include <cmath>

using namespace std;

TEST_CASE( "toupper - testing lower boundary of a")
{
    char achar = 'a';
    char result;
    
    result = toupper( achar );
    REQUIRE( result == 'A' );
}

