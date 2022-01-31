#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0002.h"

TEST_CASE( "wind_chill - testing to see if function works, Atemp - 32, wind - 15")
{
    int Atemp = 32;
    int wind = 15;
    int new_temp;
    
    new_temp = wind_chill( Atemp, wind);
    REQUIRE( new_temp == 21);
}


TEST_CASE( "wind_chill - testing negative temp, Atemp(-15), wind - 20")
{
    int Atemp = -15;
    int wind = 20;
    int new_temp;
    
    new_temp = wind_chill( Atemp, wind);
    REQUIRE( new_temp == -41);
}

TEST_CASE( "wind_chill - testing high wind with high temp, Atemp(45), wind(55)")
{
    int Atemp = 45;
    int wind = 55;
    int new_temp;
    
    new_temp = wind_chill( Atemp, wind);
    REQUIRE( new_temp == 32);
}


TEST_CASE( "wind_chill - testing high temp low wind, Atemp(49), wind(4)")
{
    int Atemp = 49;
    int wind = 4;
    int new_temp;
    
    new_temp = wind_chill( Atemp, wind);
    REQUIRE( new_temp == 47);
}




    