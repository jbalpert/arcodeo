/*
 * countNegatives.cpp
 * Arcodeo Solution
 * LeetCode Problem 1351
 */

#include "countNegatives.h"
using namespace std;
int countNegatives(vector<vector<int>> &grid)
{
    int count = 0;
    for (const auto &row : grid)
        for (auto val : row)
            if (val < 0)
                ++count;
    return count;
}