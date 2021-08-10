/*
 * fib_bottomup.cpp
 * Arcodeo Solution
 * LeetCode Problem 509
 */

#include "fib.h"
#include <vector>
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    vector<int> memo(n + 1);
    memo[1] = 1;
    for (int i = 2; i <= n; ++i)
    {
        memo[i] = memo[i - 1] + memo[i - 2];
    }
    return memo[n];
}