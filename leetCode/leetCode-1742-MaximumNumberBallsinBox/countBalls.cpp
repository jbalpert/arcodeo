/*
 * countBalls.cpp
 * Arcodeo Solution
 * LeetCode Problem 1742
 */

#include "countBalls.h"
#include <vector>
#include <algorithm>
using namespace std;
int countBalls(int lowLimit, int highLimit)
{
    int currMax = 0;
    vector<int> counts(46);
    for (int i = lowLimit; i <= highLimit; ++i)
    {
        int curr = i, sum = 0;
        while (curr > 0)
        {
            sum += curr % 10;
            curr /= 10;
        }
        counts[sum]++;
        currMax = max(currMax, counts[sum]);
    }
    return currMax;
}