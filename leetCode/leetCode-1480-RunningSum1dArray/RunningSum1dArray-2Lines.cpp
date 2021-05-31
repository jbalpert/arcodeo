/*
 * RunningSumof1dArray-2lines.cpp
 * Arcodeo Solution
 * LeetCode Problem 1480
 */

#include "RunningSumof1dArray.h"
using namespace std;

vector<int> runningSum(vector<int> &nums)
{
    for (int i = 1; i < nums.size(); i++)
        nums[i] += nums[i - 1];
    return nums;
}


