#include "a0006.h"


void createLookup( int dice[7], int rolls[], int size)
{
    int i;
    for( i = 0; i < 7; i++)
    {
        dice[i] = 0;
    }
    for( i = 0; i < size; i++)
    {
        if( rolls[i] == 1)
        {
            dice[1] ++;
        }
        if( rolls[i] == 2)
        {
            dice[2] ++;
        }
        if( rolls[i] == 3)
        {
            dice[3] ++;
        }
        if( rolls[i] == 4)
        {
            dice[4] ++;
        }
        if( rolls[i] == 5)
        {
            dice[5] ++;
        }
        if( rolls[i] == 6)
        {
            dice[6] ++;
        }
    }
}


int fewestRolled( int dice[7], int size)
{
    int dicenum = 1;
    int i;
    for( i = 1; i < size - 1; i++)
    {
        if( (dice[dicenum] > dice[i + 1]) && (dice[i + 1] > 0))
        {
            dicenum = i + 1;
        }
    }
    return dicenum;
}


int mostRolled( int dice[7], int size)
{
    int dicenum = 1;
    int i;
    for( i = 1; i < size - 1; i++)
    {
        if( ( dice[dicenum] < dice[i + 1] ))
        {
            dicenum = i + 1;
        }
    }
    return dicenum;
}