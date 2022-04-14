#include "a0010.h"

void sortArray( int array[], int size)
{
    bool swapped = true;
    int i;
    int j;
    for( i = 0; i < size - 1 && swapped == true; i++)
    {
        swapped = false;
        for( j = 0; j < size - 1 - i; j++)
            {
                if( array[j] > array[ j + 1])
                    {
                        swap( array[j + 1], array[j]);
                        swapped = true;
                    }
            }
    }
}

