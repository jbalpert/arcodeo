/*
 * heightChecker.cpp
 * Arcodeo Solution
 * LeetCode Problem 1051
 */
#include <algorithm>
#include "heightChecker.h"
using namespace std;
int heightChecker(vector<int> &heights)
{
    int count = 0;
    vector<int> sortedHeights(heights);
    sort(sortedHeights.begin(), sortedHeights.end());
    for (size_t i = 0; i < sortedHeights.size(); ++i)
        if (sortedHeights[i] != heights[i])
            count++;
    return count;
}