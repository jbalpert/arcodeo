/*
 * halvesAreAlike-set.cpp
 * Arcodeo Solution
 * LeetCode Problem 1704
 */

#include "halvesAreAlike.h"
#include <unordered_set>
using namespace std;

bool halvesAreAlike(string s)
{
    unordered_set<char> set = {'a', 'e', 'i', 'o', 'u'};
    int count = 0;
    for (size_t i = 0; i < s.size() / 2; ++i)
        if (set.find(tolower(s[i])) != set.end())
            ++count;
    for (size_t i = s.size() / 2; i < s.size(); ++i)
        if (set.find(tolower(s[i])) != set.end())
            --count;
    return !count;
}
