/*
 * repeatedNTimes.cpp
 * Arcodeo Solution
 * LeetCode Problem 961
 */
#include <cassert>
#include <unordered_set>
#include "repeatedNTimes.h"
using namespace std;
int repeatedNTimes(vector<int> &nums)
{
    unordered_set<int> set;
    for (int num : nums)
    {
        auto it = set.find(num);
        if (it == set.end())
            set.insert(num);
        else
            return *it;
    }
    assert(false);
}