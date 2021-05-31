/*
 * arrayStringsAreEqual.cpp
 * Arcodeo Solution
 * LeetCode Problem 1662
 */

#include "arrayStringsAreEqual.h"
using namespace std;

bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
{
    string wordOne, wordTwo;
    for (string &s : word1)
        wordOne += s;
    for (string &s : word2)
        wordTwo += s;
    return wordOne == wordTwo;
}
