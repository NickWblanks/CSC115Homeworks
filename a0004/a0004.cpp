#include "a0004.h"


bool isPrime( int num)
{
   int i;
   i = 2;
   
   if( num < 2)
   {
       return false;
   }
   while( i <= 9)
   {
       if( num % i == 0)
       {
           if( num == 2)
           {
               i++;
               return true;
           }
           
           i++;
           return false;
           
       }
       
       i++;
       return true;
       
   }   
   return false;
}


int nextPrime( int num)
{
    bool nextPrime = isPrime( num);
    if( nextPrime == true)
    {
        num = num + 2;
        if( nextPrime == true)
        {
            return num;
        }
        
    }
    return false;
}
    
    
    


    
    


