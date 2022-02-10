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


TEST_CASE( "countCharacters - Testing 1 letter different case" )
{
    string test = "A";
    int count;
    char ch = 'a';
    count = countCharacters( test, ch);
    REQUIRE( count == 1);
}


TEST_CASE( "countCharacters - Testing string of words" )
{
    string test = "I am a nine foot tall praying mantis";
    int count;
    char ch = 'i';
    count = countCharacters( test, ch);
    REQUIRE( count == 4);
}

TEST_CASE( "countCharacters - testing blank string")
{
    string test = " ";
    int count;
    char ch = 'a';
    count = countCharacters( test, ch);
    REQUIRE( count == 0);
}


TEST_CASE( "countCharacters - Testing blank space at end of string")
{
    string test = "Is the plural of walrus walri? ";
    int count;
    char ch = 'l';
    count = countCharacters( test, ch);
    REQUIRE( count == 4);
}


TEST_CASE( "countCharacters - testing letter with different character.")
{
    string test = "B";
    int count;
    char ch = 't';
    count = countCharacters( test, ch);
    REQUIRE( count == 0);
}



    
TEST_CASE( "countCharacters - Testing the final boss of strings, checking if it all works")
{
    string test = "AAAaaaEEEeeeIIIiiiOOOoooUUUuuu A a aAaA aaaaaBBB Potator alligAtor";
    int count;
    char ch = 'a';
    count = countCharacters( test, ch);
    REQUIRE( count == 20);
}


TEST_CASE( "countCharacters - Testing Uppercase letter as argument.")
{
    string test = "a";
    int count;
    char ch = 'A';
    count = countCharacters( test, ch);
    REQUIRE( count == 1);
}

