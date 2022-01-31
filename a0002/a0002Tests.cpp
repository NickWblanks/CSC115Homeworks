#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0002.h"

TEST_CASE( "wind_chil - testing to see if function works, Atemp - 32, wind - 15")
{
    int Atemp = 32;
    int wind = 15;
    int new_temp;
    
    new_temp = wind_chill( Atemp, wind);
    REQUIRE( new_temp == 21);
}
