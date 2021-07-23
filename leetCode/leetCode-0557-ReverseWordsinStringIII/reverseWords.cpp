/*
 * reverseWords.cpp
 * Arcodeo Solution
 * LeetCode Problem 557
 */

#include "reverseWords.h"
using namespace std;

string reverseWords(string s)
{
    size_t start = 0;
    for (size_t i = 0; i <= s.size(); ++i)
    {
        if (s[i] == ' ' || i == s.size())
        {
            reverse(&s[start], &s[i]);
            start = i + 1;
        }
    }
    return s;
}