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


TEST_CASE( "windChillWarning - testing none")
{
    int Atemp = 49;
    int wind = 4;
    string warning;
    
    warning = windChillWarning( Atemp, wind);
    REQUIRE( warning == "None");
}


TEST_CASE( "windChillWarning - minimal, >=0")
{
    int Atemp = 15;
    int wind = 15;
    string warning;
    
    warning = windChillWarning( Atemp, wind);
    REQUIRE( warning == "Minimal");
}


TEST_CASE( "windChillWarning - minimal, <32")
{
    int Atemp = 44;
    int wind = 50;
    string warning;
    
    warning = windChillWarning( Atemp, wind);
    REQUIRE( warning == "Minimal");
}


TEST_CASE( "windChillWarning - Caution, >=-20")
{
    int Atemp = 8;
    int wind = 51;
    string warning;
    
    warning = windChillWarning( Atemp, wind);
    REQUIRE( warning == "Caution");
}


TEST_CASE( "windChillWarning - Caution, <0")
{
    int Atemp = 13;
    int wind = 12;
    string warning;
    
    warning = windChillWarning( Atemp, wind);
    REQUIRE( warning == "Caution");
}


TEST_CASE( "windChillWarning - intermediate, >=-40")
{
    int Atemp = -20;
    int wind = 9;
    string warning;
    
    warning = windChillWarning( Atemp, wind);
    REQUIRE( warning == "Intermediate");
}

TEST_CASE( "windChillWarning - intermediate, < -20")
{
    int Atemp = 0;
    int wind = 18;
    string warning;
    
    warning = windChillWarning( Atemp, wind);
    REQUIRE( warning == "Intermediate");
}







    






    