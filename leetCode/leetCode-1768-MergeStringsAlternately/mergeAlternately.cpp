/*
 * mergeAlternately.cpp
 * Arcodeo Solution
 * LeetCode Problem 1768
 */

#include "mergeAlternately.h"
using namespace std;

string mergeAlternately(string word1, string word2)
{
    string res = "";
    size_t minSize = min(word1.size(), word2.size()), index = 0;
    for (size_t i = 0; i < minSize; ++i)
    {
        res += word1[i];
        res += word2[i];
    }
    if (word1.size() < word2.size())
        res += word2.substr(minSize);
    else if (word1.size() > word2.size())
        res += word1.substr(minSize);
    return res;
}