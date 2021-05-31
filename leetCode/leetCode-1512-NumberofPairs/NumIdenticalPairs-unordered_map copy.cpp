/*
 * NumIdenticalPairs-bruteForce.cpp
 * Arcodeo Solution
 * LeetCode Problem 1512
 */

#include "NumIdenticalPairs.h"
using namespace std;

int numIdenticalPairs(vector<int> &nums)
{
    int count = 0;
    for (int i = 0; i < nums.size(); ++i)
    {
        for (int j = i + 1; j < nums.size(); ++j)
        {
            if (nums[j] == nums[i])
                ++count;
        }
    }
    return count;
}
