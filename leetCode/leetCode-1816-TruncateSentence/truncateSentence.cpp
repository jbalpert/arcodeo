/*
 * truncateSentence.cpp
 * Arcodeo Solution
 * LeetCode Problem 1816
 */

#include "truncateSentence.h"
using namespace std;

string truncateSentence(string s, int k)
{
    for (int i = 0; i < s.size(); ++i)
        if (s[i] == ' ' && --k == 0)
            return s.substr(0, i);
    return s;
}
