#include "a0003.h"


int countCharacters( string test, char ch)
{
    int count = 0;
    char extract;
    int length = test.size();
    int n = 0;
    
    while( n < length)
    {
        extract = test.at(n);
        if( ch == extract)
        {
            count++;
        }
        n++;
    }
        
    
    
    return count;
}


        
    

