/*
 * moveZeroes.cpp
 * Arcodeo Solution
 * LeetCode Problem 283
 */

#include "moveZeroes.h"
using namespace std;
void moveZeroes(vector<int> &nums)
{
    int j = 0, n = (int)nums.size();
    for (int i = 0; i < n; ++i)
    {
        if (nums[i] != 0)
            nums[j++] = nums[i];
    }
    while (j < n)
        nums[j++] = 0;
}