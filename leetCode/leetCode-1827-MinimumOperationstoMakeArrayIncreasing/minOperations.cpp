/*
 * minOperations.cpp
 * Arcodeo Solution
 * LeetCode Problem 1827
 */

#include "minOperations.h"
using namespace std;

int minOperations(vector<int> &nums)
{
    int count = 0, n = nums.size() - 1;
    for (size_t i = 0; i < n; ++i)
    {
        if (nums[i] >= nums[i + 1])
        {
            count += nums[i] - nums[i + 1] + 1;
            nums[i + 1] = nums[i] + 1;
        }
    }
    return count;
}
