/*
 * replaceAllStringOccurrences.cpp
 * Arcodeo Algorithm
 */

// Given a string replace all strings denoted by replace with the corresponding string replaceTo
// For instance,
// word = "arcodeco"
// replace = "co"
// replaceTo = "LOL"
// Result = "arLOLdeLOL"
//
// All the co's got replaced with LOL
#include <string>
using namespace std;

string replaceAllStringOccurrences(string &word, const string &replace, const string &replaceTo)
{
    size_t start = 0;
    while ((start = word.find(replace, start)) != string::npos)
    {                                                   // While we can find what we want to replace!
        word.replace(start, replace.size(), replaceTo); // Replace the word
        start += replaceTo.size();                      // Move to right after the replaced word
    }
    return word;
}