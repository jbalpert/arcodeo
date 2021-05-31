/*
 * createTargetArray.cpp
 * Arcodeo Solution
 * LeetCode Problem 1389
 */

#include "createTargetArray.h"
using namespace std;

vector<int> createTargetArray(vector<int> &nums, vector<int> &index)
{
    vector<int> res;
    for (size_t i = 0; i < nums.size(); ++i)
        res.insert(res.begin() + index[i], nums[i]);
    return res;
}
