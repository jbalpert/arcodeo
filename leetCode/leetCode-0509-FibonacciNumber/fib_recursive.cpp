/*
 * fib_recursive.cpp
 * Arcodeo Solution
 * LeetCode Problem 509
 */

#include "fib.h"
using namespace std;

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}