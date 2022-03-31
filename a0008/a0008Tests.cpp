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

    

    
