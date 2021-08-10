/*
 * missingNumber_bit.cpp
 * Arcodeo Solution
 * LeetCode Problem 268
 */

#include "missingNumber.h"
using namespace std;
int missingNumber(vector<int> &nums)
{
    int res = nums.size();
    for (int i = 0; i < (int)nums.size(); ++i)
    {
        res ^= i;
        res ^= nums[i];
    }
    return res;
}