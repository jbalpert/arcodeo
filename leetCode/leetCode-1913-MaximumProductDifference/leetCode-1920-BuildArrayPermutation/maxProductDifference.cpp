/*
 * maxProductDifference.cpp
 * Arcodeo Solution
 * LeetCode Problem 1913
 */

#include "maxProductDifference.h"
#include <algorithm>
using namespace std;

int maxProductDifference(vector<int> &nums)
{
    sort(nums.begin(), nums.end());
    return nums[nums.size() - 2] * nums[nums.size() - 1] - nums[0] * nums[1];
}

// int maxProductDifference(vector<int> &nums)
// {
//     int max = INT_MIN, prevmax = INT_MIN;
//     int min = INT_MAX, prevmin = INT_MAX;

//     for (int i = 0; i < nums.size(); i++)
//     {
//         if (nums[i] < min)
//         {
//             prevmin = min;
//             min = nums[i];
//         }
//         else if (nums[i] < prevmin)
//         {
//             prevmin = nums[i];
//         }

//         if (nums[i] > max)
//         {
//             prevmax = max;
//             max = nums[i];
//         }
//         else if (nums[i] > prevmax)
//         {
//             prevmax = nums[i];
//         }
//     }
//     int result = (max * prevmax) - (min * prevmin);
//     return result;
// }
