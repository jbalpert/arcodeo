/*
 * arrayStringsAreEqual-accumulate.cpp
 * Arcodeo Solution
 * LeetCode Problem 1662
 */

#include "arrayStringsAreEqual.h"
#include <numeric>
using namespace std;

bool arrayStringsAreEqual(vector<string> &word1, vector<string> &word2)
{
    string s = "";
    string wordOne = accumulate(word1.begin(), word1.end(), s), wordTwo = accumulate(word2.begin(), word2.end(), s);
    return (wordOne == wordTwo);
}
