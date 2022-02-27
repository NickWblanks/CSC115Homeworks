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

TEST_CASE( "characterPool - lower, upper, digit, punct, and blank, 96")
{
    string passW = {"A big whal@ ate my dad2"};
    int total;
    int size;
    size = 23;
    total = characterPool( passW, size);
    CHECK( total == 96);
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
    CHECK( ans == 38);
}

TEST_CASE( "passEntropy - testcase 2, 52, 45.60351774")
{
    string passW = {"AbcdefGh"};
    double ans;
    int size = 8;
    ans = passEntropy( passW, size);
    CHECK( ans == 46);
}

TEST_CASE( "passEntropy - testcase 3, 62, 53.58776679")
{
    string passW = {"AbcdefgH1"};
    double ans;
    int size = 9;
    ans = passEntropy( passW, size);
    CHECK( ans == 54);
}

TEST_CASE( "passStrength - all lower, 26, Reasonable")
{
    string passW = {"timissad"};
    int size = 8;
    string str;
    str = passStrength( passW, size);
    CHECK( str == "Reasonable");
}

TEST_CASE( "PassStrength - upper and lower, strong")
{
    string passW = {"Hopscotchtim"};
    int size = 12;
    string str;
    str = passStrength( passW, size);
    CHECK( str == "Strong");
}

TEST_CASE( "PassStrength - upper, lower, digits, strong")
{
    string passW = {"Crabcakes9000"};
    int size = 13;
    string str;
    str = passStrength( passW, size);
    CHECK( str == "Strong");
}


TEST_CASE( "passStrength - upper, lower, blanks, digits, and punct, very strong.")
{
    string passW = {"Mr. Krabs is a crab from a tv show"};
    int size = 34;
    string str;
    str = passStrength( passW, size);
    CHECK( str == "Very Strong");
}

TEST_CASE( "passStrength - lower, very weak")
{
    string passW = {"krab"};
    int size = 4;
    string str;
    str = passStrength( passW, size);
    CHECK( str == "Very Weak");
}


TEST_CASE( "passwordCalc - lowercase, 26, very weak")
{
    string passW = {"john"};
    double entropy;
    string strength;
    int size = 4;
    entropy = passEntropy( passW, size);
    strength = passStrength( passW, size);
    passwordCalc( passW, size);
    CHECK( entropy == 19);
    CHECK( strength == "Very Weak");
}


TEST_CASE( "passwordCalc - uppercase, 26, very weak")
{
    string passW = {"JOSH"};
    double entropy;
    string strength;
    int size = 4;
    entropy = passEntropy( passW, size);
    strength = passStrength( passW, size);
    passwordCalc( passW, size);
    CHECK( entropy == 19);
    CHECK( strength == "Very Weak");
}

TEST_CASE( "passwordCalc - mixed, 52, weak")
{
    string passW = {"Tubes"};
    double entropy;
    string strength;
    int size = 5;
    entropy = passEntropy( passW, size);
    strength = passStrength( passW, size);
    passwordCalc( passW, size);
    CHECK( entropy == 29);
    CHECK( strength == "Weak");
}


TEST_CASE( "passwordCalc - mixed, 64, reasonable")
{
    string passW = {"H a p1"};
    double entropy;
    string strength;
    int size = 6;
    entropy = passEntropy( passW, size);
    strength = passStrength( passW, size);
    passwordCalc( passW, size);
    CHECK( entropy == 36);
    CHECK( strength == "Reasonable");
}

TEST_CASE( "passwordCalc - mixed, 94, strong")
{
    string passW = {"Huell1happy?"};
    double entropy;
    string strength;
    int size = 12;
    entropy = passEntropy( passW, size);
    strength = passStrength( passW, size);
    passwordCalc( passW, size);
    CHECK( entropy == 79);
    CHECK( strength == "Strong");
}


TEST_CASE( "passwordCalc - mixed, 96, very strong")
{
    string passW = {"Huell1happy? ornothappy?"};
    double entropy;
    string strength;
    int size = 24;
    entropy = passEntropy( passW, size);
    strength = passStrength( passW, size);
    passwordCalc( passW, size);
    CHECK( entropy == 158);
    CHECK( strength == "Very Strong");
}
    
    


    
    
    






    


    
    

    

    





    
    

