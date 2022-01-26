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
    
    result = char( toupper( achar ));
    REQUIRE( result == 'T' );
}


TEST_CASE( "islower - Testing lower boundary of a")
{
    
    char ch = 'a';
    bool result;
    result = islower( ch );
    REQUIRE( result != false);
}


TEST_CASE( "islower - Testing upper boundary of z")
{
    
    char ch = 'z';
    bool result;
    result = islower( ch );
    REQUIRE( result == true);
}


TEST_CASE( "islower - Testing uppercase boundary A")
{
    char ch = 'A';
    bool result;
    result = islower( ch );
    REQUIRE( result == false);
}


TEST_CASE( "islower - Testing uppercase boundary Z")
{
    char ch = 'Z';
    bool result;
    result = islower( ch );
    REQUIRE( result != true);
}


TEST_CASE( "islower - random uppercase letter")
{
    char ch = 'S';
    bool result;
    result = islower( ch );
    REQUIRE( result == false);
}





