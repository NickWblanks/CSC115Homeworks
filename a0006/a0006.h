#pragma once
#include <cctype>
#include <cmath>


void createLookup( int dice[7], int rolls[], int size);


int fewestRolled( int dice[7], int size);

int mostRolled( int dice[7], int size);

int sumRolls( int dice[7], int size);
