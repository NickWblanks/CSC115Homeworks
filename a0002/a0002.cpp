#include "a0002.h"

int wind_chill( int Atemp, int wind )
{
    
    return int( 35.74 + (.6215 * Atemp) - (35.75 * pow( wind, .16)) + (.4275 * Atemp * pow(wind, .16)));
    
}




string windChillWarning( int Atemp, int wind )
{
    int windChillWarning = wind_chill( Atemp, wind );
    if( windChillWarning >= 32)
    {
        return "None";
    }
    if(windChillWarning >= 0)  
    {    
        return "Minimal";
    }
    if(windChillWarning >= -20)
    {
        return "Caution";
    }
    if(windChillWarning >= -40)
    {
        return "Intermediate";
    }
    
    return "Extreme";   
}


    
    





