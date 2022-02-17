#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0004.h"

TEST_CASE( "isPrime - testing negative")
{
    int num = -1;
    bool result;    
    result = isPrime( num);
    REQUIRE( result == false);
}
TEST_CASE( "isPrime - Testing 0, is not prime")
{
    int num = 0;
    bool result;
    result = isPrime( num);
    REQUIRE( result == false);
}
TEST_CASE( "isPrime - testing 1" )
{
    int num = 1;
    bool result;    
    result = isPrime( num);
    REQUIRE( result == false);
}


TEST_CASE( "isPrime number 2, is prime")
{
    int num = 2;
    bool result;    
    result = isPrime( num);
    REQUIRE( result == true);
}

TEST_CASE( "isPrime - 3, is prime")
{
    int num = 3;
    bool result;
    result = isPrime( num);
    REQUIRE( result == true);
}

TEST_CASE( "isPrime - 4, not prime")
{
    int num = 4;
    bool result;    
    result = isPrime( num);
    REQUIRE( result == false);
}


TEST_CASE( "isPrime - 45, is not prime")
{
    int num = 45;
    bool result;
    result = isPrime( num);
    REQUIRE( result == false);
}
TEST_CASE( "isPrime - Testing larger number 677, is  prime")
{
    int num = 677;
    bool result;
    result = isPrime( num);
    REQUIRE( result == true);
}
TEST_CASE( "isPrime - Testing larger number 472882049, is  prime")
{
    int num = 472882049;
    bool result;
    result = isPrime( num);
    REQUIRE( result == true);
}
TEST_CASE( "isPrime - Testing larger number 472882051, is  prime")
{
    int num = 472882051;
    bool result;
    result = isPrime( num);
    REQUIRE( result == false);
}







TEST_CASE( "nextPrime, 2 next is 3")
{
    int num = 2;
    int result;
    result = nextPrime( num);
    REQUIRE( result == 3);
}


TEST_CASE( "nextPrime, 3 next is 5")
{
    int num = 3;
    int result;
    result = nextPrime( num);
    REQUIRE( result == 5);
}


TEST_CASE( "nextPrime, 13 next is 17")
{
    int num = 13;
    int result;
    result = nextPrime( num);
    REQUIRE( result == 17);
}


TEST_CASE( "nextPrime - 472882049")
{
    int num = 472882049;
    int result;
    result = nextPrime( num );
    REQUIRE( result == 472882073);
}

TEST_CASE( "nextPrime - (-5)")
{
    int num = -5;
    int result;
    result = nextPrime( num);
    REQUIRE( result == 3);
}




TEST_CASE( "isTwinPrime - 3, true")
{
    int num = 3;
    bool result;
    result = isTwinPrime( num);
    REQUIRE( result == true);
}

TEST_CASE( "isTwinPrime - 4, false")
{
    int num = 4;
    bool result;
    result = isTwinPrime( num);
    REQUIRE( result == false);
}




