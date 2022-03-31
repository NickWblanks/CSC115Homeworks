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

