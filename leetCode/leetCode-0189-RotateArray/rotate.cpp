/*
 * rotate.cpp
 * Arcodeo Solution
 * LeetCode Problem 189
 */

#include "rotate.h"
#include <algorithm>
using namespace std;
void rotate(vector<int> &nums, int k)
{
    k %= nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}