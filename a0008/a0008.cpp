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


string createEmail( string firstName, string lastName, string domain)
{
    string email;
    email = firstName + "." + lastName + "@" + domain;
    return email;
}


void fixList( string mixed[], string firstLast[], string lastFirst[], string email[], int size, string domain)
{
    int i;
    int j;
    int k;
    string eList;
    string first;
    string last;
    string fullName;
    string firstName;
    string lastName;
    for( i = 0; i < size; i++)
    {
        firstLast[i] = mixed[i];
        lastFirst[i] = mixed[i];
    }
    for( j = 0; j < size; j++)
    {
        fullName = lastFirst[j];
        splitNameLF( fullName, firstName, lastName);
        lastFirst[j] = fullName;
        cout << lastFirst[j] << endl;
    }
    for( k = 0; k < size; k++)
    {
        fullName = firstLast[k];
        splitNameFL( fullName, firstName, lastName);
        firstLast[k] = fullName;
        cout << firstLast[k] << endl;
    }
    for( i = 0; i < size; i++)
    {
        fullName = firstLast[i];
        splitNameLF( fullName, firstName, lastName);
        first = firstName;
        last = lastName;
        eList = createEmail( first, last, domain);
        email[i] = eList;
    }
}



    

