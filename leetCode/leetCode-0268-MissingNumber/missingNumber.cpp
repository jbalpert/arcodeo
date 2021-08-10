/*
 * missingNumber.cpp
 * Arcodeo Solution
 * LeetCode Problem 268
 */

#include "missingNumber.h"
using namespace std;
int missingNumber(vector<int> &nums)
{
    int res = nums.size() * (nums.size() + 1) / 2;
    for (auto num : nums)
        res -= num;
    return res;
}