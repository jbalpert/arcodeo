/*
 * permute.cpp
 * Arcodeo Solution
 * LeetCode Problem 46
 */

#include "permute.h"
#include <algorithm>
using namespace std;
vector<vector<int>> res;

vector<vector<int>> permute(vector<int> &nums)
{
    genPerms(nums, 0);
    return res;
}

void genPerms(vector<int> &nums, int permLength)
{
    if (permLength == nums.size())
    {
        res.push_back(nums);
    }
    for (size_t i = permLength; i < nums.size(); ++i)
    {
        swap(nums[i], nums[permLength]);
        genPerms(nums, permLength + 1);
        swap(nums[permLength], nums[i]);
    }
}