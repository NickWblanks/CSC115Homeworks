#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0006.h"

TEST_CASE( "createLookup - zeroing arrays and checking.")
{
    int dice[7];
    int rolls[10] = {0};
    
    createLookup( dice, rolls, 0);
    
    CHECK( dice[0] == 0);
}


TEST_CASE( "createLookup - edge cases, 1's and 6's")
{
    int dice[7];
    int rolls[6] = {1, 1, 1, 6, 6, 6};
    
    createLookup( dice, rolls, 6);
    CHECK( dice[1] == 3);
    CHECK( dice[6] == 3);
}

TEST_CASE( "createLookup - larger rolls base")
{
    int dice[7];
    int rolls[50] = { 5, 4, 3, 2, 1, 3, 4, 6, 6, 6, 6, 1, 2, 3, 1, 4, 5, 6, 6, 4, 5, 1, 2, 2, 2, 3, 4, 1, 1, 4, 3, 4, 5, 6, 1, 2, 3, 4, 5, 4, 2, 1, 6, 2, 4, 4, 3, 2, 6, 1 };
    
    createLookup( dice, rolls, 50);
    CHECK( dice[0] == 0);
    CHECK( dice[1] == 9);
    CHECK( dice[2] == 9);
    CHECK( dice[3] == 7);
    CHECK( dice[4] == 11);
    CHECK( dice[5] == 5);
    CHECK( dice[6] == 9);
}


TEST_CASE( "fewestRolled - no duplicates, 3 is least rolled")
{
    int few;
    int dice[7];
    int rolls[11] = {1, 2, 3, 2, 1, 4, 5, 4, 5, 6, 6};
    createLookup( dice, rolls, 11);
    few = fewestRolled( dice, 7);
    CHECK( few == 3);
}


TEST_CASE( "fewestRolled - noduplicates, 1 is least rolled")
{
    int few;
    int dice[7];
    int rolls[7] = {1, 2, 2, 2, 4, 5, 6,};
    createLookup( dice, rolls, 7);
    few = fewestRolled( dice, 7);
    CHECK( few == 1);
}

TEST_CASE( "fewestRolled - duplicate, 2 and 3 are both least rolled, 2 should be ans")
{
    int few;
    int dice[7];
    int rolls[10] = {1, 1, 2, 3, 4, 4, 5, 6, 5, 6};
    createLookup( dice, rolls, 7);
    few = fewestRolled( dice, 7);
    CHECK( few == 2);
}

    

TEST_CASE( "mostRolled - no duplicates, 6 is most rolled")
{
    int most;
    int dice[7];
    int rolls[10] = { 1, 2, 3, 4, 5, 6, 6, 6, 6, 2,};
    createLookup( dice, rolls, 7);
    most = mostRolled( dice, 7);
    CHECK( most == 6);
}





    