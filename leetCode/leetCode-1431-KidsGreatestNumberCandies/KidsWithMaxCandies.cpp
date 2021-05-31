/*
 * KidsWithMaxCandies.cpp
 * Arcodeo Solution
 * LeetCode Problem 1431
 */

#include "KidsWithMaxCandies.h"
using namespace std;

vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
{
    vector<bool> res;
    res.reserve(candies.size());
    int maxElt = 0;
    for (int i : candies)
        maxElt = max(i, maxElt);
    maxElt -= extraCandies;
    for (int candy : candies)
        res.push_back(candy >= maxElt);
    return res;
}
