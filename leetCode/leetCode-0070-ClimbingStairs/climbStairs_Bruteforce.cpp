/*
 * climbStairs_Bruteforce.cpp
 * Arcodeo Solution
 * LeetCode Problem 70
 */

#include "climbStairs.h"
using namespace std;

int climbStairs(int n)
{
    if (n <= 1)
        return 1;
    return climbStairs(n - 1) + climbStairs(n - 2);
}