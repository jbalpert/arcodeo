/*
 * concatenationArray.cpp
 * Arcodeo Solution
 * LeetCode Problem 1920
 */

#include "concatenationArray.h"
using namespace std;

vector<int> getConcatenation(vector<int> &nums)
{
    vector<int> res(nums);
    for (int i : nums)
        res.push_back(i);
    return res;
}
