/*
 * largestAltitude.cpp
 * Arcodeo Solution
 * LeetCode Problem 1732
 */

#include "largestAltitude.h"
using namespace std;

int largestAltitude(vector<int> &gain)
{
    int currentAlt = 0, maxAlt = 0;
    for (size_t i = 0; i < gain.size(); ++i)
    {
        currentAlt += gain[i];
        maxAlt = max(currentAlt, maxAlt);
    }
    return maxAlt;
}
