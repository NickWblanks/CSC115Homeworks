#pragma once
#include <string>
#include <cmath>
#include <cctype>
#include <iostream>
using namespace std;


void sortById( string names[], int id[], int size);

void sortByNames( string names[], int id[], int size);

int getID( string names[], int id[], int size, string target);

string getName( string names[], int id[], int size, int target);