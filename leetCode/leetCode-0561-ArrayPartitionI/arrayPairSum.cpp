/*
 * arrayPairSum.cpp
 * Arcodeo Solution
 * LeetCode Problem 561
 */
#include <algorithm>
#include "arrayPairSum.h"
using namespace std;
int arrayPairSum(vector<int> &nums)
{
    int sum = 0;
    sort(nums.begin(), nums.end());
    for (size_t i = 0; i < nums.size(); i += 2)
        sum += nums[i];
    return sum;
}