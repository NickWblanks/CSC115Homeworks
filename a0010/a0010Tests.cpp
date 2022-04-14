#define CATCH_CONFIG_RUNNER
#include "..\\catch.hpp"
#include "a0010.h"

const bool RUNCATCH = true;

int main()
{
    Catch::Session session;
    int result;
    if( RUNCATCH)
    {
        result = session.run();
        if( result != 0)
        {
            cout << "Test Cases Didnt Pass." << endl;
            return result;
        }
    }
    int i = 0;
    int array[1000] = {0};
    cout << "Enter up to 1000 integers, <ctrl>-z to stop: " << endl;
    while( i < 1000 && cin >> array[i])
    {
        i++;
    }
    int integers = i;
    sortArray( array, integers);
    cout << "Quantity: " << integers << endl;
    int min = array[0];
    int max = array[integers - 1];
    cout << "Range: " << min << " to " << max << endl;
    int sum = sumArray( array, integers);
    cout << "Sum: " << sum << endl;
    cout << fixed << setprecision(4);
    double avg = double( sum) / double( integers);
    cout << "Average: " << avg << endl;
    cout << "Data: " << endl;
    for( i = 0; i < integers; i++)
    {
        cout << setw(10) << array[i];
        if( i % 5 == 4)
        {
            cout << endl;
        }
    }
    cout << endl;
}

TEST_CASE( "sortArray - testing small set for basis")
{
    int array[5] = {5, 4, 3, 2, 1};
    sortArray( array, 5);
    CHECK( array[0] == 1);
    CHECK( array[1] == 2);
    CHECK( array[2] == 3);
    CHECK( array[3] == 4);
    CHECK( array[4] == 5);
}


TEST_CASE( "sortArray - testing numbers already in order")
{
    int array[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    sortArray( array, 8);
    CHECK( array[0] == 1);
    CHECK( array[7] == 8);
}


TEST_CASE( "sortArray - testing duplicates, first found of dupes is lower in array.")
{
    int array[11] = {12, 14, 44, 12, 14, 88, 90, 12, 44, 13, 90};
    sortArray( array, 11);
    CHECK( array[0] == 12);
    CHECK( array[1] == 12);
    CHECK( array[2] == 12);
    CHECK( array[3] == 13);
    CHECK( array[10] == 90);
}


TEST_CASE( "sumArray - testing small set for workability")
{
    int array[5] = {5, 4, 3, 2, 1};
    int sum = sumArray( array, 5);
    REQUIRE( sum == 15);
}

TEST_CASE( "sumArray - testing negative values")
{
    int array[9] = {-1, -5, 15, -8, 90, 21, 42, -77, 0};
    int sum = sumArray( array, 9);
    REQUIRE( sum == 77);
}

TEST_CASE( "sumArray - testing array with 1 value")
{
    int array[1] = {1};
    int sum = sumArray( array, 1);
    REQUIRE( sum == 1);
}
