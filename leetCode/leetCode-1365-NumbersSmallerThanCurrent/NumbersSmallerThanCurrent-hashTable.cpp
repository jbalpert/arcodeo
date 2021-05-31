/*
 * NumbersSmallerThanCurrent.cpp
 * Arcodeo Solution
 * LeetCode Problem 1365
 */

#include "NumbersSmallerThanCurrent.h"
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int> &nums)
{
    vector<int> sortedNums = nums, res(nums.size());
    sort(sortedNums.begin(), sortedNums.end());
    unordered_map<int, int> map; // maps values to nums smaller than value
    for (size_t i = 0; i < nums.size(); ++i)
    {
        if (map.find(sortedNums[i]) == map.end())
            map[sortedNums[i]] = i;
    }
    for (size_t i = 0; i < nums.size(); ++i)
        res[i] = map[nums[i]];
    return res;
}
