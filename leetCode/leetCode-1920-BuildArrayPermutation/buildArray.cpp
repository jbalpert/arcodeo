/*
 * buildArray.cpp
 * Arcodeo Solution
 * LeetCode Problem 1929
 */

#include "buildArray.h"
using namespace std;

vector<int> buildArray(vector<int> &nums)
{
    vector<int> res(nums.size());
    for (size_t i = 0; i < nums.size(); ++i)
        res[i] = nums[nums[i]];
    return res;
}
