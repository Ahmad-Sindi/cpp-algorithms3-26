#include <iostream>
#include <string>
#include <cctype>

using namespace std;

/*
 * Algorithm Challenge & Problem Solving Level 3 – Challenge #26 Uppercase and Lowercase String Transformation
 *
 * This program reads a full string from the user, then:
 * 1. Converts all characters to uppercase.
 * 2. Converts all characters to lowercase.
 *
 * The goal of this challenge is to practice:
 * - String manipulation
 * - Character transformation
 * - Loop-based processing
 * - Writing clean and readable C++ functions
 */

// Reads a full line of text from the user
string ReadString()
{
    string Text;
    cout << "Enter your string:\n";
    getline(cin, Text);
    return Text;
}

// Converts all characters in the string to uppercase
string ToUpperAllLetterString(string S1)
{
    for (int i = 0; i < S1.length(); i++)
    {
        S1[i] = toupper(S1[i]); // Convert each character to uppercase
    }
    return S1;
}

// Converts all characters in the string to lowercase
string ToLowerAllLetterString(string S1)
{
    for (int i = 0; i < S1.length(); i++)
    {
        S1[i] = tolower(S1[i]); // Convert each character to lowercase
    }
    return S1;
}

int main()
{
    string S1 = ReadString(); // Read input string from the user

    cout << "\nString after converting to UPPERCASE:\n";
    S1 = ToUpperAllLetterString(S1);
    cout << S1 << endl;

    cout << "\nString after converting to lowercase:\n";
    S1 = ToLowerAllLetterString(S1);
    cout << S1 << endl;

    return 0;
}
