#include "a0004.h"


bool isPrime( int num)
{
   int i;
   i = 3;
   
   if( num < 2)
   {
       return false;
   }
   
   if( num !=2 && num%2 == 0)
   {
       return false;
   }
      
   while( i < num)
   {
       if( num % i == 0)
       {
           return false;          
       }
       
       i+=2;     
   }   
   return true;
}


int nextPrime( int num)
{
    
    int nextP = num + 2;
    bool ans;
    if( num <= 2)
    {
        return 3;
    }
        
    
    ans = isPrime( nextP);
    while( ans != true)
    {
        nextP += 2;
        ans = isPrime( nextP );
    }
    
    return nextP;
}



bool isTwinPrime( int num)
{
    bool ans;
    ans = isPrime( num);
    if( ans == false)
    {
        return false;
    }
}

        
        
        