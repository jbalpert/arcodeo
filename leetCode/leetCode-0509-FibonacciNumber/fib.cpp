/*
 * fib_bottomup2.cpp
 * Arcodeo Solution
 * LeetCode Problem 509
 */

#include "fib.h"
#include <cmath>
using namespace std;

int fib(int n)
{
    double phi = (sqrt(5) + 1) / 2;
    return round(pow(phi, n) / sqrt(5));
}