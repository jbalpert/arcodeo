/*
 * intersection.cpp
 * Arcodeo Solution
 * LeetCode Problem 349
 */

#include "intersection.h"
#include <unordered_set>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
    unordered_set<int> set(nums1.begin(), nums1.end());
    vector<int> res;
    for (int num : nums2)
    {
        if (set.erase(num) > 0)
            res.push_back(num);
    }
    return res;
}