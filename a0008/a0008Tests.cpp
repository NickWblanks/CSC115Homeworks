#define CATCH_CONFIG_MAIN
#include "..\\catch.hpp"
#include "a0008.h"

TEST_CASE( "splitNameLF - Python, Monty - first is Monty, last is Python, full name should be Python, Monty")
{
    string fullName = "Python, Monty";
    string lastName;
    string firstName;
    splitNameLF( fullName, firstName, lastName);
    CHECK( fullName == "Python, Monty");
    CHECK( lastName == "Python");
    CHECK( firstName == "Monty");
}

TEST_CASE( "splitNameLF - Monty Python - first is Monty last is Python, full name should be Python, Monty")
{
    string fullName = "Monty Python";
    string firstName;
    string lastName;
    splitNameLF( fullName, firstName, lastName);
    CHECK( fullName == "Python, Monty");
    CHECK( lastName == "Python");
    CHECK( firstName == "Monty");
}


TEST_CASE( "splitNameLF - King Arthur, should return Arthur, King.")
{
    string fullName = "King Arthur";
    string firstName;
    string lastName;
    splitNameLF( fullName, firstName, lastName);
    CHECK( fullName == "Arthur, King");
    CHECK( lastName == "Arthur");
    CHECK( firstName == "King");
}

TEST_CASE( "splitNameLF - Doe, John, should return Doe, John")
{
    string fullName = "Doe, John";
    string firstName;
    string lastName;
    splitNameLF( fullName, firstName, lastName);
    CHECK( fullName == "Doe, John");
    CHECK( firstName == "John");
    CHECK( lastName == "Doe");
}

TEST_CASE( "splitNameFL - Doe, John, should return John Doe")
{
    string fullName = "Doe, John";
    string firstName;
    string lastName;
    splitNameFL( fullName, firstName, lastName);
    CHECK( fullName == "John Doe");
    CHECK( firstName == "John");
    CHECK( lastName == "Doe");
}

TEST_CASE( "splitNameFL - Monty Python, should return Monty Python")
{
    string fullName = "Monty Python";
    string firstName;
    string lastName;
    splitNameFL( fullName, firstName, lastName);
    CHECK( fullName == "Monty Python");
    CHECK( firstName == "Monty");
    CHECK( lastName == "Python");
}

TEST_CASE( "creatEmail - Monty Python, yahoo.com, should return Monty.Python@yahoo.com")
{
    string firstName = "Monty";
    string lastName = "Python";
    string domain = "Yahoo.com";
    string email = createEmail( firstName, lastName, domain);
    REQUIRE( email == "Monty.Python@Yahoo.com");
}

TEST_CASE( "createEMail - Grim Reaper, Death.net, should return Grim.Reaper@Death.net")
{
    string firstName = "Grim";
    string lastName = "Reaper";
    string domain = "Death.net";
    string email = createEmail( firstName, lastName, domain);
    REQUIRE( email == "Grim.Reaper@Death.net");
}

TEST_CASE( "fixList - simple array, testing if it all works")
{
    string mixed[4] = {"Grim Reaper", "Candy, King", "Blue Jay", "Banks, Robert"};
    string firstLast[4];
    string lastFirst[4];
    string email[4];
    string domain = "Goober.com";
    fixList( mixed, firstLast, lastFirst, email, 4, domain);
    CHECK( mixed[0] == "Grim Reaper");
    CHECK( mixed[3] == "Banks, Robert");
    CHECK( firstLast[0] == "Grim Reaper");
    CHECK( firstLast[3] == "Robert Banks");
    CHECK( lastFirst[0] == "Reaper, Grim");
    CHECK( lastFirst[3] == "Banks, Robert");
    CHECK( email[0] == "Grim.Reaper@Goober.com");
    CHECK( email[3] == "Robert.Banks@Goober.com");
}

TEST_CASE( "fixList - having fun, testing larger array")
{
    string mixed[8] = {"ObiWan Kenobi", "Windu, Mace", "Palpatine, Emporer", "Wedge Antilles", "Darth Vader", "Skywalker, Luke", "Solo, Han", "Star Destroyer"};
    string firstLast[8];
    string lastFirst[8];
    string email[8];
    string domain = "StarWarsguys.fake";
    fixList( mixed, firstLast, lastFirst, email, 8, domain);
    CHECK( firstLast[0] == "ObiWan Kenobi");
    CHECK( firstLast[1] == "Mace Windu");
    CHECK( firstLast[7] == "Star Destroyer");
    CHECK( lastFirst[0] == "Kenobi, ObiWan");
    CHECK( lastFirst[1] == "Windu, Mace");
    CHECK( lastFirst[7] == "Destroyer, Star");
    CHECK( email[0] == "ObiWan.Kenobi@StarWarsguys.fake");
    CHECK( email[4] == "Darth.Vader@StarWarsguys.fake");
    CHECK( email[5] == "Luke.Skywalker@StarWarsguys.fake");
}


    

    
