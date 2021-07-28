/*
 * sortedSquares.cpp
 * Arcodeo Solution
 * LeetCode Problem 977
 */
#include <algorithm>
#include <cmath>
#include "sortedSquares.h"
using namespace std;
vector<int> sortedSquares(vector<int> &nums)
{
    vector<int> res(nums.size());
    int left = 0, right = (int)nums.size() - 1;
    for (int i = (int)nums.size() - 1; left <= right; --i)
        res[i] = pow(abs(nums[left]) < abs(nums[right]) ? nums[right--] : nums[left++], 2);
    return res;
}