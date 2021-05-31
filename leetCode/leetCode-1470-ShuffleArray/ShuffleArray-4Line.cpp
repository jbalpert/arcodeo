/*
 * ShuffleArray-4line.cpp
 * Arcodeo Solution
 * LeetCode Problem 1470
 */

#include "ShuffleArray.h"
using namespace std;

vector<int> shuffleArray(vector<int> &nums, int n)
{
    vector<int> res(nums.size());
    for (int i = 0; i < nums.size(); ++i)
        res[i] = (i % 2) ? nums[n++] : nums[i / 2];
    return res;
}
