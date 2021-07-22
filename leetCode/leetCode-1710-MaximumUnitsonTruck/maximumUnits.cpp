/*
 * maximumUnits.cpp
 * Arcodeo Solution
 * LeetCode Problem 1710
 */
#include <algorithm>
#include "maximumUnits.h"
using namespace std;
int maximumUnits(vector<vector<int>> &boxTypes, int truckSize)
{
    int sum = 0;
    sort(boxTypes.begin(), boxTypes.end(), [](const vector<int> &box1, const vector<int> &box2) -> bool
         { return box1[1] > box2[1]; });
    for (const auto &box : boxTypes)
    {
        truckSize -= box[0];
        if (truckSize > 0)
            sum += box[1] * box[0];
        else
            return sum + (box[0] + truckSize) * box[1];
    }
    return sum;
}