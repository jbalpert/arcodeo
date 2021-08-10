/*
 * countBits_cheat.cpp
 * Arcodeo Solution
 * LeetCode Problem 338
 */

#include "countBits.h"
using namespace std;
vector<int> countBits(int n)
{
    vector<int> res(n + 1);
    for (int i = 1; i <= n; i++)
        res[i] = __builtin_popcount(i);
    return res;
}