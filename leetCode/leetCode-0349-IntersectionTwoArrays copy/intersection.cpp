/*
 * intersection.cpp
 * Arcodeo Solution
 * LeetCode Problem 250
 */

#include "intersection.h"
#include <unordered_map>
using namespace std;

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> res;
    unordered_map<int, int> map;
    for (auto num : nums1)
        map[num]++;
    for (auto num : nums2)
    {
        auto it = map.find(num);
        if (it != map.end() && it->second > 0)
        {
            res.push_back(num);
            it->second--;
        }
    }
    return res;
}