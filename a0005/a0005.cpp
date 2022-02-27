#include "a0005.h"


//void passwordCalc( string passW, int size)
//{
    
//}
void passwordCalc( string passW, int &entropy, string &strength)
{
    entropy = passEntropy(passW, passW.size() );
    strength = passStrength(passW, passW.size() );
}





int characterPool( string passW, int size)
{
    int lowPool = 0;
    int upperPool = 0;
    int digitPool = 0;
    int punctPool = 0;
    int blankPool = 0;
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
        if(isblank(ch))
        {
            blankPool = 2;
        }
        total = lowPool + upperPool + digitPool + punctPool + blankPool;
        
    }
    return total;
}


int passEntropy( string passW, int size)
{
    double entbits;
    double ans;
    int entropy;
    ans = characterPool( passW, size);
    entbits = log2( ans );
    entropy = int( round( entbits * size));
    
    return entropy;
}

string passStrength( string passW, int size)
{
    double strength = passEntropy( passW, size);
    if( strength <= 28)
    {
        return "Very Weak";
    }
    if( strength <= 35)
    {
        return "Weak";
    }
    if( strength <= 59)
    {
        return "Reasonable";
    }
    if( strength <= 127)
    {
        return "Strong";
    }
    if( strength > 127)
    {
        return "Very Strong";
    }
    return "Nothing";
}
