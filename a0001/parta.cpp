#define CATCH_CONFIG_MAIN
#include "..//catch.hpp"
#include <cctype>

using namespace std;

TEST_CASE( "toupper - testing lower boundary of a")
{
    char achar = 'a';
    char result;
    
    result = char( toupper( achar ));
    REQUIRE( result == 'A' );
}


TEST_CASE( "toupper - testing lower boundary of z")
{
    char achar = 'z';
    char result;
    
    result = char( toupper( achar ));
    REQUIRE( result == 'Z' );
}


TEST_CASE( "toupper - testing lower boundary of A")
{
    char achar = 'A';
    char result;
    
    result = char( toupper( achar ));
    REQUIRE( result == 'A' );
}


TEST_CASE( "toupper - testing upper boundary of Z")
{
    char achar = 'Z';
    char result;
    
    result = char( toupper( achar ));
    REQUIRE( result ==  'Z' );
}


TEST_CASE( "toupper - Testing random lowercase letter t")
{
    char achar = 't';
    char result;
    
    result = char( toupper( achar ))
    REQUIRE( result == 'T' );
}
