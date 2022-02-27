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
/*
TEST_CASE( "entbits - case 1, 4.7")
{
    string passW = {"abcdefgh"};
    double ans;
    int size = 8;
    ans = passEntropy( passW, size);
    CHECK( ans == Approx(4.7004397));
}

TEST_CASE( "entbits - case 2, 5.700")
{
    string passW = {"AbcdefGh"};
    double ans;
    int size = 8;
    ans = passEntropy( passW, size);
    CHECK( ans == Approx(5.7004397));
}
*/

TEST_CASE( "passEntropy - case 1, 26, 37.60351774")
{
    string passW = {"abcdefgh"};
    double ans;
    int size = 8;
    ans = passEntropy( passW, size);
    CHECK( ans == Approx(37.60351774));
}

TEST_CASE( "passEntropy - testcase 2, 52, 45.60351774")
{
    string passW = {"AbcdefGh"};
    double ans;
    int size = 8;
    ans = passEntropy( passW, size);
    CHECK( ans == Approx(45.60351774));
}

TEST_CASE( "passEntropy - testcase 3, 62, 53.58776679")
{
    string passW = {"AbcdefgH1"};
    double ans;
    int size = 9;
    ans = passEntropy( passW, size);
    CHECK( ans == Approx( 53.58776679));
}


    
    

    

    





    
    

