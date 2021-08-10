/*
 * majorityElement.cpp
 * Arcodeo Solution
 * LeetCode Problem 169
 * Moore's Voting Algorithm
 */

#include "majorityElement.h"
using namespace std;
int majorityElement(vector<int> &nums)
{
    int count = 1, res = nums[0];
    for (size_t i = 1; i < nums.size(); ++i)
    {
        if (nums[i] == res)
            ++count;
        else if (count == 0)
        {
            res = nums[i];
            ++count;
        }
        else
        {
            --count;
        }
    }
    return res;
}