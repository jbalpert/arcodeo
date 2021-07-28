/*
 * findDisappearedNumbers.cpp
 * Arcodeo Solution
 * LeetCode Problem 448
 */

#include "thirdMax.h"
#include <algorithm>
using namespace std;
vector<int> findDisappearedNumbers(vector<int> &nums)
{
    vector<int> res;
    int n = (int)nums.size();
    for (int i = 0; i < n; ++i)
    {
        int temp = abs(nums[i]) - 1;
        nums[temp] = nums[temp] < 0 ? nums[temp] : -nums[temp];
    }
    for (int i = 0; i < n; ++i)
    {
        if (nums[i] > 0)
            res.push_back(i + 1);
    }
    return res;
}