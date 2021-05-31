/*
 * balancedStringSplit.cpp
 * Arcodeo Solution
 * LeetCode Problem 1221
 */

#include "balancedStringSplit.h"
using namespace std;

int balancedStringSplit(string s)
{
    int count = 0, letterCount = 0;
    for (size_t i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'R')
            ++letterCount;
        else
            --letterCount;
        if (letterCount == 0)
            ++count;
    }
    return count;
}