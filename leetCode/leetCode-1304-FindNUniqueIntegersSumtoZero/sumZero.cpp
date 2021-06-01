/*
 * sumZero-first.cpp
 * Arcodeo Solution
 * LeetCode Problem 1304
 */

#include "sumZero.h"
using namespace std;

vector<int> sumZero(int n)
{
    vector<int> res;
    res.reserve(n);
    if (n % 2)
        res.push_back(0);
    for (int i = 1; i <= n / 2; ++i)
    {
        res.push_back(i);
        res.push_back(i * -1);
    }
    return res;
}
