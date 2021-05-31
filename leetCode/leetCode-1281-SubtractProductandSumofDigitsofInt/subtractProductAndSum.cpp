/*
 * subtractProductAndSum.cpp
 * Arcodeo Solution
 * LeetCode Problem 1281
 */

#include "subtractProductAndSum.h"

int subtractProductAndSum(int n)
{
    int product = 1, sum = 0;
    while (n != 0)
    {
        product *= n % 10;
        sum += n % 10;
        n /= 10;
    }
    return product - sum;
}