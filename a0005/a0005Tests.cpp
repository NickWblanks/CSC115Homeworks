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

    
    

