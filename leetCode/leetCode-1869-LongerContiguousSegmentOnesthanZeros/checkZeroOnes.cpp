/*
 * checkZeroOnes.cpp
 * Arcodeo Solution
 * LeetCode Problem 1869
 */

#include "checkZeroOnes.h"
using namespace std;

bool checkZeroOnes(string s)
{
    int maxZeros = 0, maxOnes = 0, zeroCount = 0, oneCount = 0;
    for (size_t i = 0; i < s.size(); ++i)
    {
        if (s[i] == '1')
        {
            ++oneCount;
            maxOnes = max(maxOnes, oneCount);
            zeroCount = 0;
        }
        else
        {
            ++zeroCount;
            maxZeros = max(maxZeros, zeroCount);
            oneCount = 0;
        }
    }
    return maxOnes > maxZeros;
}
