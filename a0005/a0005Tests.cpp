#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0005.h"


TEST_CASE( "passwordCalc - all lowercase, 26")
{
    string passW = {"abcdefgh"};
    int total;
    int size;
    size = 8;
    total = characterPool( passW, size);
    CHECK( total == 26);
}

TEST_CASE( "characterPool - lower and upper case, 52")
{
    string passW = {"AbcdefGh"};
    int total;
    int size;
    size = 8;
    total = characterPool( passW, size);
    CHECK( total == 52);
}

TEST_CASE( "characterPool - lower, upper, and digit, 62")
{
    string passW = {"AbcdefgH1"};
    int total;
    int size;
    size = 9;
    total = characterPool( passW, size);
    CHECK( total == 62);
}


TEST_CASE( "characterPool - lower, upper, digit, and punctuation, 94")
{
    string passW = {"AbcdEfgH1@"};
    int total;
    int size;
    size = 10;
    total = characterPool( passW, size);
    CHECK( total == 94);
}




    
    

