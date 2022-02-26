#include "a0005.h"


int characterPool( string passW, int size)
{
    int lowPool = 0;
    int upperPool = 0;
    upperPool = 0;
    lowPool = 0;
    int total;
    total = 0;
    char ch;
    int i;
    
    for( i = 0; i < size; i++)
    {
        ch = passW[i];
        if(isupper(ch))
        {
            lowPool = 26;
        }
        else if(islower(ch))
        {
            upperPool = 26;
        }
        total = lowPool + upperPool;
        return total;
    }
    return total;
}


