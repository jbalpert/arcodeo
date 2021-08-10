/*
 * searchInsert.cpp
 * Arcodeo Solution
 * LeetCode Problem 35
 */

#include "searchInsert.h"
#include <algorithm>
using namespace std;

int searchInsert(vector<int> &nums, int target)
{
    return lower_bound(nums.begin(), nums.end(), target) - nums.begin();
}