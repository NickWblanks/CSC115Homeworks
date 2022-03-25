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
    int ID = getID( names, id, 4, "three");
    CHECK( ID == 33);
    CHECK( names[0] == "four");
    CHECK( id[0] == 44);
}

TEST_CASE( "getId - testing larger data set, checking boundaries")
{
    int id[8] = { 8, 7, 6, 5, 4, 3, 2, 1};
    string names[8] = {"zombie", "witch", "troll", "skeleton", "monster", "hydra", "fairy", "dragon"};
    int ID = getID( names, id, 8, "dragon");
    CHECK( ID == 1);
    CHECK( names[0] == "dragon");
    CHECK( names[7] == "zombie");
    CHECK( id[0] == 1);
    CHECK( id[7] == 8);
}

TEST_CASE( "getID - testing data not found, should return -1")
{
    int id[5] = {92, 74, 65, 43, 12};
    string names[5] = {"Bill", "Bob", "Joe", "Caitlyn", "Sandra"};
    int ID = getID( names, id, 5, "James");
    REQUIRE( ID == -1);
}

TEST_CASE( "getName - testing data nout found should return empty string")
{
    int id[4] = {78, 59, 12, 34};
    string names[4] = {"Danny", "Sam", "Lilly", "Robert"};
    string person = getName( names, id, 4, 32);
    REQUIRE( person == "");
}

TEST_CASE( "getName - testing larger data set, checking bundaries")
{
    int id[7] = {107, 106, 105, 104, 103, 102, 101};
    string names[7] = {"Mario", "Kirby", "Peach", "Snake", "Link", "Ganondorf", "Sonic"};
    string person = getName( names, id, 7, 101);
    CHECK( person == "Sonic");
    CHECK( id[0] == 101);
    CHECK( id[6] == 107);
    CHECK( names[0] == "Sonic");
    CHECK( names[6] == "Mario");
}



