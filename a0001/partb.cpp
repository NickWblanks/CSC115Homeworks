#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include <cmath>

using namespace std;

TEST_CASE( "pow - 5 to the 3.8 power")
{
    double base = 5;
    double exponent = 3.8;
    double answer;
    
    answer = pow(base, exponent);
    REQUIRE( answer == Approx(452.987289));
}


TEST_CASE( "pow - 10 to the negative 2 power")
{
    double base = 10;
    double exponent = -2;
    double answer;
    
    answer = pow(base, exponent);
    REQUIRE( answer == Approx(0.01));
}


TEST_CASE( "pow - negative 3 to the 2 power")
{
    double base = -3;
    double exponent = 2;
    double answer;
    
    answer = pow(base, exponent);
    REQUIRE( answer == Approx(9));
}


TEST_CASE( "pow - .001 raised to the .001")
{
    double base = .001;
    double exponent = .001;
    double answer;
    
    answer = pow(base, exponent);
    REQUIRE( answer == Approx(.99312));
}




