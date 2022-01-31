#include "a0002.h"

int wind_chill( int Atemp, int wind )
{
    
    return int ( 35.74 + .6215 * Atemp - 35.75 * pow( wind, .16) + .4275 * Atemp * pow(wind, .16));
    
}


