/*
 * toLowerCase-loop.cpp
 * Arcodeo Solution
 * LeetCode Problem 709
 */

#include "toLowerCase.h"
using namespace std;

string toLowerCase(string s)
{
    for (char &character : s)
        character = tolower(character);
    return s;
}
