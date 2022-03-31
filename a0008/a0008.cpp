#include "a0008.h"

void splitNameLF( string &fullName, string &firstName, string &lastName)
{
    int LF = fullName.find( ",");
    cout << LF << endl;
    int length = fullName.size();
    cout << length << endl;
    if( LF == -1)
    {
        int space = fullName.find( " ");
        lastName = fullName.substr( space + 1, length - space);
        cout << lastName << endl;
        firstName = fullName.substr( 0, space);
        cout << firstName << endl;
        fullName = lastName + ", " + firstName;
        cout << fullName << endl;
    }
    else
    {
        lastName = fullName.substr( 0, LF);
        cout << lastName << endl;
        firstName = fullName.substr( LF + 2, length - LF + 2);
        cout << firstName << endl;
        fullName = lastName + ", " + firstName;
        cout << fullName << endl;
    }
}

