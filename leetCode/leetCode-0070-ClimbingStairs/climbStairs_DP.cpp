/*
 * climbStairs_DP.cpp
 * Arcodeo Solution
 * LeetCode Problem 70
 */

#include "climbStairs.h"
#include <vector>
using namespace std;

int climbStairs(int n)
{
    if (n <= 2)
        return n;
    vector<int> memo(n + 1);
    memo[1] = 1;
    memo[2] = 2;
    for (int i = 3; i <= n; ++i)
        memo[i] = memo[i - 1] + memo[i - 2];
    return memo[n];
}