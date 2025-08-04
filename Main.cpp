#include <iostream>
#include <cctype>
#include "Exception.h"
#include "TemplateF.h"

using namespace std;

char character(char start, int offset)
{
    if (!isalpha(start))
    {
        throw invalidCharacterException();
    }

    char result = start + offset;

    if ((islower(start) && (!islower(result) || !isalpha(result))) ||
        (isupper(start) && (!isupper(result) || !isalpha(result))))
    {
        throw invalidRangeException();
    }

    return result;
}
int main()
{
    cout << "=== Template Function Tests ===\n";
    cout << "Half of 10 (int): " << half(10) << endl;
    cout << "Half of 11 (int): " << half(11) << endl;
    cout << "Half of 20.0 (double): " << half(20.0) << endl;
    cout << "Half of 13.5f (float): " << half(13.5f) << endl;

    
    cout << "\n=== Character Offset Tests ===\n";

    try
    {
        cout << "character('a', 1) = " << character('a', 1) << endl;
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }

    try
    {
        cout << "character('a', -1) = ";
        cout << character('a', -1) << endl;
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }

    try
    {
        cout << "character('Z', -1) = " << character('Z', -1) << endl;
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }

    try
    {
        cout << "character('?', 5) = ";
        cout << character('?', 5) << endl;
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }

    try
    {
        cout << "character('A', 32) = ";
        cout << character('A', 32) << endl;
    }
    catch (exception &e)
    {
        cout << e.what() << endl;
    }

    return 0;
}