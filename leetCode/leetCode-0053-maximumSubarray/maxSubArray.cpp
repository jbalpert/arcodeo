/*
 * maxSubArray.cpp
 * Arcodeo Solution
 * LeetCode Problem 53
 */

#include "maxSubArray.h"
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int n = (int)nums.size();
    int currSum = nums[0], maxVal = nums[0];
    for (int i = 1; i < n; ++i)
    {
        currSum = max(nums[i] + currSum, nums[i]);
        maxVal = max(maxVal, currSum);
    }
    return maxVal;
}