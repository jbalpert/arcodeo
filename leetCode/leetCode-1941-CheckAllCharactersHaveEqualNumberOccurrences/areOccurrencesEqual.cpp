/*
 * areOccurrencesEqual.cpp
 * Arcodeo Solution
 * LeetCode Problem 1941
 */

#include "areOccurrencesEqual.h"
#include <unordered_map>
using namespace std;

bool areOccurrencesEqual(string s)
{
    unordered_map<char, int> counts;
    for (char character : s)
        counts[character]++;
    int count = counts.begin()->second;
    for (auto it = counts.begin(); it != counts.end(); ++it)
        if (count != it->second)
            return false;
    return true;
}