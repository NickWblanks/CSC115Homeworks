#pragma once
#include <cctype>
#include <cmath>
#include <string>


using namespace std;

void passwordCalc( string pass, int size);

double passEntropy( string passW, int size);

int characterPool( string passW, int size);

string passStrength( string passW, int size);




