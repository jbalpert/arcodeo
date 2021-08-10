/*
 * fib_bottomup2.cpp
 * Arcodeo Solution
 * LeetCode Problem 509
 */

#include "fib.h"
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    int prev2 = 0, prev1 = 1, res = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        res = prev1 + prev2;
        prev2 = prev1;
        prev1 = res;
    }
    return res;
}