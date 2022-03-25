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
    int id[9] = {9, 8, 7 , 6, 5, 4, 3, 2, 1};
    string names[9] = {"Pluto", "Neptune", "Uranus", "Saturn", "Jupiter", "Mars", "Earth", "Venus", "Mercury"};
    sortById( names, id, 9);
    CHECK( id[0] == 1);
    CHECK( id[1] == 2);
    CHECK( id[8] == 9);
    CHECK( names[0] == "Mercury");
    CHECK( names[1] == "Venus");
    CHECK( names[8] == "Pluto");
}

TEST_CASE( "sortByName - testing small set, checking names, all lowercase")
{
    int id[5] = { 2, 3, 1, 5, 4};
    string names[5] = {"ziva", "barbie", "joan", "kelly", "abby"};
    sortByNames( names, id, 5);
    CHECK( names[0] == "abby");
    CHECK( names[4] == "ziva");
    CHECK( id[0] == 4);
    CHECK( id[4] == 2);
}


TEST_CASE( "sortByName - testing larger set, checking uppercase")
{
    int id[9] = {9, 8, 7 , 6, 5, 4, 3, 2, 1};
    string names[9] = {"Pluto", "Neptune", "Uranus", "Saturn", "Jupiter", "Mars", "Earth", "Venus", "Mercury"};
    sortByNames( names, id, 9);
    CHECK( names[0] == "Earth");
    CHECK( names[8] == "Venus");
    CHECK( id[0] == 3);
    CHECK( id[8] == 2);
}

TEST_CASE( "getId - testing small set, checking if it works")
{
    int id[4] = {11, 22, 33, 44};
    string names[4] = {"one", "two", "three", "four"};
    int ID = getId( names, id, 4, "three");
    CHECK( ID == 33);
    CHECK( names[0] == "four");
    CHECK( id[0] == 44);
}


