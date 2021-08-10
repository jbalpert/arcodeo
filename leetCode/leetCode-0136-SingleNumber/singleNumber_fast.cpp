/*
 * singleNumber_fast.cpp
 * Arcodeo Solution
 * LeetCode Problem 136
 */

#include "singleNumber.h"
using namespace std;
int singleNumber(vector<int> &nums)
{
    int x = 0;
    for (auto num : nums)
        x ^= num;
    return x;
}