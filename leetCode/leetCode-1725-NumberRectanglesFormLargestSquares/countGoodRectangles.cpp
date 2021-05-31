/*
 * countGoodRectangles.cpp
 * Arcodeo Solution
 * LeetCode Problem 1725
 */

#include "countGoodRectangles.h"
#include <unordered_map>
using namespace std;

int countGoodRectangles(vector<vector<int>> &rectangles)
{
    unordered_map<int, int> map; // map length -> count
    int maxDist = 0;
    for (auto &rectangle : rectangles)
    {
        int squareDist = min(rectangle[0], rectangle[1]);
        if (maxDist < squareDist)
            maxDist = squareDist;
        ++map[squareDist];
    }
    return map[maxDist];
}