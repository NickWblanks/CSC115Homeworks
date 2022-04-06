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


TEST_CASE( "swapStrings - testing strings of different lengths")
{
    char str1[100] = "Thomas the Tank";
    char str2[100] = "Ben the Bullet";
    swapStrings( str1, str2);
    CHECK( strcmp( str2, "Thomas the Tank") == 0);
    CHECK( strcmp( str1, "Ben the Bullet") == 0);
}


TEST_CASE( "swapStrings - testing longer strings")
{
    char str1[100] = "Abbot";
    char str2[100] = "Ford";
    swapStrings( str1, str2);
    CHECK( strcmp( str2, "Abbot") == 0);
    CHECK( strcmp( str1, "Ford") == 0);
}


TEST_CASE( "sortOrder - testing small string, anne should be in array[0]")
{
    char array[4][21] = {"Liz", "Harry", "Ben", "Anne"};
    sortOrder( array, 4);
    CHECK( strcmp( array[0], "Anne") == 0);
    CHECK( strcmp( array[3], "Liz") == 0);
}


