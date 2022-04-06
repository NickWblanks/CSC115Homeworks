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


TEST_CASE( "sortOrder - testing larger data set, the data set is already sorted")
{
    char array[6][21] = {"Barry", "Carl", "Jim", "Sam", "Tom", "Zeus"};
    sortOrder( array, 6);
    CHECK( strcmp( array[0], "Barry") == 0);
    CHECK( strcmp( array[5], "Zeus") == 0);
}


TEST_CASE( "sortOrder - testing larger data set, stuff is all out of order")
{
    char array[8][21] = {"Luis", "Santa", "Grim", "Spiderman", "Batman", "Jiffylube", "Metamorph", "Andy"};
    sortOrder( array, 8);
    CHECK( strcmp( array[0], "Andy") == 0);
    CHECK( strcmp( array[1], "Batman") == 0);
    CHECK( strcmp( array[2], "Grim") == 0);
    CHECK( strcmp( array[3], "Jiffylube") == 0);
    CHECK( strcmp( array[7], "Spiderman") == 0);
}

TEST_CASE( "sortLen - testing small data set, first and last need to swap.")
{
    char array[5][21] = {"Babybackribs", "Dollar", "Keep", "Simple", "One"};
    sortLen( array, 5);
    CHECK( strcmp( array[0], "One") == 0);
    CHECK( strcmp( array[4], "Babybackribs") == 0);
}



