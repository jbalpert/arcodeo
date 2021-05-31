/*
 * ShuffleArray.cpp
 * Arcodeo Solution
 * LeetCode Problem 1470
 */

#include "ShuffleArray.h"
using namespace std;

vector<int> shuffleArray(vector<int> &nums, int n)
{
    vector<int> res(nums.size());
    for (int i = 0, j = 0; i < n; ++i)
    {
        res[j] = nums[i];
        res[j + 1] = nums[i + n];
        j += 2;
    }
    return res;
}
