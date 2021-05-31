/*
 * minOperations-rangebased.cpp
 * Arcodeo Solution
 * LeetCode Problem 1827
 */

#include "minOperations.h"
using namespace std;

int minOperations(vector<int> &nums)
{
    int res = 0, last = 0;
    for (auto n : nums)
    {
        res += max(0, last - n + 1);
        last = max(n, last + 1);
    }
    return res;
}
