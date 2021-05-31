/*
 * decompressRLElist.cpp
 * Arcodeo Solution
 * LeetCode Problem 1313
 */

#include "decompressRLElist.h"
using namespace std;

vector<int> decompressRLElist(vector<int> &nums)
{
    vector<int> res;
    for (size_t i = 0; i < nums.size(); i += 2)
    {
        int freq = nums[i], val = nums[i + 1];
        for (size_t j = 0; j < freq; ++j)
            res.push_back(val);
    }
    return res;
}
