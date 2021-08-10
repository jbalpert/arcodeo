/*
 * singleNumber.cpp
 * Arcodeo Solution
 * LeetCode Problem 136
 */

#include "singleNumber.h"
#include <unordered_map>
#include <cassert>
using namespace std;
int singleNumber(vector<int> &nums)
{
    unordered_map<int, int> counts;
    for (int num : nums)
        counts[num]++;
    for (const auto &pair : counts)
        if (pair.second == 1)
            return pair.first;
    assert(false);
}