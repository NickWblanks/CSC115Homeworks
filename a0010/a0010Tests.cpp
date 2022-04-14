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
    cout << "Enter up to 1000 integers, <ctrl>-z to stop: ";
    while( i < 1000 && cin >> array[i])
    {
        i++;
    }
    int integers = i;
    sortArray( array, integers);
    cout << "Quantity: " << integers << endl;
    int min = array[0];
    int max = array[integers];
    cout << "Range: " << min << "to " << max << endl;
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
