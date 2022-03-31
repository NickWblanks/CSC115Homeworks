#include "a0008.h"

void splitNameLF( string &fullName, string &firstName, string &lastName)
{
    int comma = fullName.find( ",");
    //cout << LF << endl;
    int length = fullName.size();
    //cout << length << endl;
    if( comma == -1)
    {
        int space = fullName.find( " ");
        lastName = fullName.substr( space + 1, length - space);
        //cout << lastName << endl;
        firstName = fullName.substr( 0, space);
        //cout << firstName << endl;
        fullName = lastName + ", " + firstName;
        //cout << fullName << endl;
    }
    else
    {
        lastName = fullName.substr( 0, comma);
        //cout << lastName << endl;
        firstName = fullName.substr( comma + 2, length - comma + 2);
        //cout << firstName << endl;
        fullName = lastName + ", " + firstName;
        //cout << fullName << endl;
    }
}


void splitNameFL( string &fullName, string &firstName, string &lastName)
{
    int comma = fullName.find( ",");
    int length = fullName.size();
    if( comma == -1)
    {
        int space = fullName.find( " ");
        lastName = fullName.substr( space + 1, length - space);
        firstName = fullName.substr( 0, space);
        fullName = firstName + " " + lastName;
    }
    else
    {
        lastName = fullName.substr( 0, comma);
        firstName = fullName.substr( comma + 2, length - comma + 2);
        fullName = firstName + " " + lastName;
    }
}


