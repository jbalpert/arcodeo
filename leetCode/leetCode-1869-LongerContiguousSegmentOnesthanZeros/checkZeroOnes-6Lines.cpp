/*
 * checkZeroOnes-6Lines.cpp
 * Arcodeo Solution
 * LeetCode Problem 1869
 */

#include "checkZeroOnes.h"
using namespace std;

bool checkZeroOnes(string s)
{
    int maxCounts[2], counts[2];
    for (auto ch : s)
    {
        int v = ch - '0';
        maxCounts[v] = max(maxCounts[v], ++counts[v]);
        counts[1 - v] = 0;
    }
    return maxCounts[1] > maxCounts[0];
}
