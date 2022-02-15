#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0004.h"


TEST_CASE( "testing number 2, is prime")
{
    int num = 2;
    bool result;    
    result = isPrime( num);
    REQUIRE( result == true);
}

TEST_CASE( "testing numer 3, is prime")
{
    int num = 3;
    bool result;
    result = isPrime( num);
    REQUIRE( result == true);
}

TEST_CASE( "Testing number 4, not prime")
{
    int num = 4;
    bool result;    
    result = isPrime( num);
    REQUIRE( result == false);
}


TEST_CASE( "Testing larger number 45, is not prime")
{
    int num = 45;
    bool result;
    result = isPrime( num);
    REQUIRE( result == true);
}


TEST_CASE( "Testing 1, is not prime")
{
    int num = 1;
    bool result;
    result = isPrime( num);
    REQUIRE( result == false);
}


TEST_CASE( "Testing nextPrime, 3 next is 5")
{
    int num = 3;
    int result;
    result = nextPrime( num);
    REQUIRE( result == 5);
}
