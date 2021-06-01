/*
 * maxProduct-sort.cpp
 * Arcodeo Solution
 * LeetCode Problem 1464
 */

#include "maxProduct.h"
#include <algorithm>
using namespace std;

int maxProduct(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    return (nums[nums.size() - 1] - 1) * (nums[nums.size() - 2] - 1);
}
