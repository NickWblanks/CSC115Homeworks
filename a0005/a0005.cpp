#include "a0005.h"


int characterPool( string passW, int size)
{
    int lowPool = 0;
    int upperPool = 0;
    int digitPool = 0;
    int punctPool = 0;
    int total = 0;
    char ch;
    int i;
    
    for( i = 0; i <= size; i++)
    {
        ch = passW[i];
        if(isupper(ch))
        {
            lowPool = 26;
        }
        if(islower(ch))
        {
            upperPool = 26;
        }
        if(isdigit(ch))
        {
            digitPool = 10;
        }
        if(ispunct(ch))
        {
            punctPool = 32;
        }
        total = lowPool + upperPool + digitPool + punctPool;
        
    }
    return total;
}


