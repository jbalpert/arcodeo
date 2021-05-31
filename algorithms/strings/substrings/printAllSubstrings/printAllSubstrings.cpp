/*
 * printAllSubstrings.cpp
 * Arcodeo Algorithm
 */
#include <iostream>
#include <string>

using namespace std;

// A substring consists of the set of contigious elements within a string

// For instance: HELLO

// H
// HE
// HEL
// HELL
// HELLO
// E
// EL
// ELL
// ELLO
// L
// LL
// LLO
// L
// LO
// O
//

int main()
{
    string word;
    cin >> word;
    for (size_t i = 0; i < word.size(); ++i)
    {
        string temp = word.substr(i, 1);
        cout << temp << "\n";
        for (size_t j = i + 1; j < word.size(); ++j)
        {
            temp += word[j];
            cout << temp << "\n";
        }
    }
}
