/*
 * halvesAreAlike-find.cpp
 * Arcodeo Solution
 * LeetCode Problem 1704
 */

#include "halvesAreAlike.h"
using namespace std;

bool halvesAreAlike(string s)
{
    string set = {"aeiou"};
    int count = 0, mid = s.size() / 2;
    for (size_t i = 0, j = mid; i < mid; ++i, ++j)
    {
        if (~set.find(tolower(s[i])))
            ++count;
        if (~set.find(tolower(s[j])))
            --count;
    }
    return !count;
}
