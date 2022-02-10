#include "a0003.h"


int countCharacters( string test, char ch)
{
    int count = 0;
    char extract;
    int length = test.size();
    int n = 0;
    
    while( n < length)
    {
    
        if( islower( ch))
        {
            extract = test.at(n);
            extract = char( tolower( extract));
            if( ch == extract)
            {
                count++;
            }
        }
        if( isupper( ch))
        {
            extract = test.at(n);
            extract = char( toupper( extract));
            if( ch == extract)
            {
                count++;
            }
        }
        n++;
    }
    return count;
}
        
        
    



        
    

