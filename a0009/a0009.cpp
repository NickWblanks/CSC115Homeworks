#include "a0009.h"

void swapStrings( char str1[100], char str2[100])
{
    int i;
    int length1 = strlen( str1);
    int length2 = strlen( str2);
    if( length1 >= length2)
    {
        for( i = 0; i < length1; i++)
        {
            swap( str1[i], str2[i]);
        }
    }
    if( length1 < length2)
    {
        for( i = 0; i < length2; i++)
        {
            swap( str2[i], str1[i]);
        }
    }
}

