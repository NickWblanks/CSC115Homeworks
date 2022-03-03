#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0006.h"

TEST_CASE( "createLookup - zeroing arrays and checking.")
{
    int i;
    int dice[7];
    int rolls[10] = {0};
    
    createLookup( dice, rolls, 0);
    for( i = 0; i < 7; i++)
    {
        CHECK( dice[i] == 0);
    }
}

    