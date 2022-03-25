#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0007.h"

TEST_CASE( "sortById - testing basic data set. Checking if id values are sorted.")
{
    int id[5] = {123, 231, 321, 222, 111};
    string names[5] = {"bob", "bill", "ben", "baker", "badger"};
    sortById( names, id, 5);
    CHECK( id[0] == 111);
    CHECK( id[4] == 321);
    CHECK( names[0] == "badger");
    CHECK( names[4] == "ben");
}


TEST_CASE( "sortById - testing larger data set")
{
    int id[] = {9, 8, 7 , 6, 5, 4, 3, 2, 1};
    string names[9] = {"Pluto", "Neptune", "Uranus", "Saturn", "Jupiter", "Mars", "Earth", "Venus", "Mercury"};
    sortById( names, id, 9);
    CHECK( id[0] == 1);
    CHECK( id[1] == 2);
    CHECK( id[8] == 9);
    CHECK( names[0] == "Mercury");
    CHECK( names[1] == "Venus");
    CHECK( names[8] == "Pluto");
}

