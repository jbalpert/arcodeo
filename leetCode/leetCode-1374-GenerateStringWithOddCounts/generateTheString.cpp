/*
 * generateTheString.cpp
 * Arcodeo Solution
 * LeetCode Problem 1374
 */
#include "generateTheString.h"
#include <cassert>
using namespace std;
string generateTheString(int n)
{
    if (n % 2)
    {
        string res(n, 'a');
        return res;
    }
    else
    {
        string res(n - 1, 'a');
        return res + 'b';
    }
    assert(false);
}