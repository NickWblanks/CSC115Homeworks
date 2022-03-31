#pragma once
#include <string>
#include <cmath>
#include <cctype>
#include <iostream>
#include <iomanip>

using namespace std;

void splitNameLF( string &fullName, string &firstName, string &lastName);

void splitNameFL( string &fullName, string &firstName, string &lastName);

string createEmail( string firstName, string lastName, string domain);