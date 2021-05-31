/*
 * NumbersSmallerThanCurrent-bruteforce.cpp
 * Arcodeo Solution
 * LeetCode Problem 1365
 */

#include "NumbersSmallerThanCurrent.h"
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    vector<int> res(nums.size());
    for (size_t i = 0; i < nums.size(); ++i)
    {
        int count = 0;
        for (size_t j = 0; j < nums.size(); ++j)
        {
            if (nums[i] > nums[j])
                ++count;
            res[i] = count;
        }
    }
    return res;
}
