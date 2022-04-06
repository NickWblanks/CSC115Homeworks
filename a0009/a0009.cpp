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


void sortOrder( char array[][21], int list)
{
    int i;
    int j;
    bool swapped = true;
    for( i = 0; i < list - 1 && swapped == true; i++)
    {
        swapped = false;
        for( j = 0; j < list - 1 - i; j++)
        {
            if( strncmp( array[j], array[j + 1], 21) > 0)
            {
                swapStrings( array[j], array[j + 1]);
                swapped = true;
            }
        }
    }
}


void sortLen( char array[][21], int list)
{
    int i;
    int j;
    int min;
    int length1;
    int length2;
    for( i = 0; i < list; i++)
    {
        min = i;
        length1 = strlen( array[min]);
        length2 = strlen( array[i + 1]);
        for( j = i + 1; j < list; j++)
        {
            if( length1 > length2)
            {
                min = j;
            }
            swapStrings( array[i], array[min]);
        }
    }
}
