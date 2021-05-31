/*
 * replaceDigits.cpp
 * Arcodeo Solution
 * LeetCode Problem 1844
 */

#include "replaceDigits.h"
using namespace std;

// could be done with partial_sum or adjacent_difference

string replaceDigits(string s)
{
    for (size_t i = 0; i < s.size() - 1; i += 2)
    {
        s[i + 1] = s[i] + s[i + 1] - '0';
    }
    return s;
}
