/*
 * uniqueOccurrences.cpp
 * Arcodeo Solution
 * LeetCode Problem 1207
 */
#include <unordered_map>
#include <unordered_set>
#include "uniqueOccurrences.h"
using namespace std;
bool uniqueOccurrences(vector<int> &arr)
{
    unordered_map<int, int> occurences;
    unordered_set<int> isUnique;
    for (auto val : arr)
        occurences[val]++;
    for (auto mapIt = occurences.begin(); mapIt != occurences.end(); ++mapIt)
    {
        auto setIt = isUnique.find(mapIt->second);
        if (setIt == isUnique.end())
            isUnique.insert(mapIt->second);
        else
            return false;
    }
    return true;
}