/*
 * RunningSumof1dArray-runningSum.cpp
 * Arcodeo Solution
 * LeetCode Problem 1480
 */

#include "RunningSumof1dArray.h"
using namespace std;

vector<int> runningSum(vector<int> &nums)
{
    int sum = 0;
    for (int &num : nums)
    {
        sum += num;
        num = sum;
    }
    return nums;
}
