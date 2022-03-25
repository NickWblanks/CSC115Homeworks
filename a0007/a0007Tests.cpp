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

    