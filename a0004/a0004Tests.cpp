#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0004.h"


TEST_CASE( "testing number 2, is prime")
{
    int num = 2;
    bool result;
       
    
    result = isPrime( 2);
    REQUIRE( result == true);
}
