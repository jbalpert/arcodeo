/*
 * minTimeToVisitAllPoints.cpp
 * Arcodeo Solution
 * LeetCode Problem 1266
 */

#include "minTimeToVisitAllPoints.h"
#include <algorithm>
using namespace std;

int minTimeToVisitAllPoints(vector<vector<int>> &points)
{
    int res = 0;
    for (size_t i = 1; i < points.size(); ++i)
    {
        res += max(abs(points[i][0] - points[i - 1][0]), abs(points[i][1] - points[i - 1][1]));
    }
    return res;
}
