/*
 * thirdMax.cpp
 * Arcodeo Solution
 * LeetCode Problem 414
 */

#include "thirdMax.h"
#include <algorithm>
using namespace std;
int thirdMax(vector<int> &nums)
{
    make_heap(nums.begin(), nums.end());
    int max = nums[0], currMax = nums.front(), maxCount = 1;
    while (!nums.empty() && maxCount < 3)
    {
        if (currMax != nums.front())
        {
            maxCount++;
            currMax = nums.front();
        }
        pop_heap(nums.begin(), nums.end());
        nums.pop_back();
    }
    return (maxCount < 3) ? max : currMax;
}