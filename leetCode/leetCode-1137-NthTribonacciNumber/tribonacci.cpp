/*
 * tribonacci.cpp
 * Arcodeo Solution
 * LeetCode Problem 1137
 */

#include "tribonacci.h"
using namespace std;
int tribonacci(int n)
{
    if (n <= 1)
        return n;
    if (n == 2)
        return 1;
    int prevprev = 0, prev = 1, last = 1;
    for (int i = 3; i <= n; ++i)
    {
        int sum = prevprev + prev + last;
        prevprev = prev;
        prev = last;
        last = sum;
    }
    return last;
}