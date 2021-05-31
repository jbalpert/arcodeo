/*
 * replaceAllCharacterOccurrences.cpp
 * Arcodeo Algorithm
 */

// Given a string replace all characters denoted by replace with the corresponding string replaceTo
// For instance,
// word = "arcodeo"
// replace = 'o'
// replaceTo = "LOL"
// Result = "arcLOLdeLOL"
//
// All the o's got replaced with LOL

#include <string>
using namespace std;

string replaceAllCharacterOccurences(const string &word, const char replace, const string &replaceTo)
{
    string res;
    for (char character : word)
        if (character == replace)
            res += replaceTo;
        else
            res += character;
    return res;
}