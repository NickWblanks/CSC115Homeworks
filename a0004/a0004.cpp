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
    
    int nextP = num;
    int shortP = num;
    bool ans;
    
    if( num < 2)
    {
        return 2;
    }
    if(num == 2)
    {
        return 3;
    }
    if( num % 2 == 0)
    {
        shortP += 1;
        ans = isPrime( shortP);
        while( ans != true)
        {
            shortP += 2;
            ans = isPrime( shortP);
        }
        
        return shortP;
        
    }
    else
    {
        nextP += 2;
        ans = isPrime( nextP);
    }
    
    while( ans != true)
    {
        nextP += 2;
        ans = isPrime( nextP);     
    }
    
    return nextP;
}



bool isTwinPrime( int num)
{
    int i = num + 2 ;
    int n = num - 2;
    bool ans;
    ans = isPrime( num);
    if( ans == false)
    {
        return false;
    }
    if( ans == true)
    {
        ans = isPrime( i);
        if( ans == true)
        {
            return ans;
        }     
        if(ans == false)
        {
            ans = isPrime( num);
            if( ans == true)
            {
                ans = isPrime( n);
            }
            if( ans == true)
            {
                return ans;
            }
            return false;
        }
        return false;
    }
    return false;
} 