#include "a0007.h"


void sortById( string names[], int id[], int size)
{
    int i;
    int j;
    bool swapped = true;
    for( i = 0; i < size - 1 && swapped == true; i++)
    {
        swapped = false;
        for( j = 0; j < size - 1 - i; j++)
        {
            if( id[j] > id[j + 1])
            {
                swap( id[j + 1], id[j]);
                swap( names[j + 1], names[j]);
                swapped = true;
            }
        }
    }
}


void sortByNames( string names[], int id[], int size)
{    
    int i;
    int j;
    bool swapped = true;
    for( i = 0; i < size - 1 && swapped == true; i++)
    {
        swapped = false;
        for( j = 0; j < size - 1 - i; j++)
        {
            if( names[j] > names[j + 1])
            {
                swap( names[j + 1], names[j]);
                swap( id[j + 1], id[j]);
                swapped = true;
            }
        }
    }
}


int getId( string names[], int id[], int size, string target)
{
    int i;
    string check;
    for( i = 0; i < size; i++)
    {
        sortByNames( names, id, size);
        check = names[i];
        if( check == target)
        {
            return id[i];
        }
    }
    return -1;
}


    