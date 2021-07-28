/*
 * sortedSquares_sort.cpp
 * Arcodeo Solution
 * LeetCode Problem 977
 */
#include <algorithm>
#include "sortedSquares.h"
using namespace std;
vector<int> sortedSquares(vector<int> &nums)
{
    for (int &i : nums)
    {
        i *= i;
    }
    sort(nums.begin(), nums.end());
    return nums;
}