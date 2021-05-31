/*
 * NumIdenticalPairs-unordered_map.cpp
 * Arcodeo Solution
 * LeetCode Problem 1512
 */

#include "NumIdenticalPairs.h"
#include <unordered_map>
using namespace std;

int numIdenticalPairs(vector<int> &nums)
{
    unordered_map<int, int> map;
    int count = 0;
    for (int num : nums)
        ++map[num];
    for (auto it = map.begin(); it != map.end(); ++it)
    {
        count += it->second * (it->second - 1) / 2;
    }
    return count;
}
