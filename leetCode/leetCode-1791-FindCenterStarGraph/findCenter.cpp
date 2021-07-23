/*
 * findCenter.cpp
 * Arcodeo Solution
 * LeetCode Problem 1791
 */
#include "findCenter.h"
using namespace std;
int findCenter(vector<vector<int>> &edges)
{
    const auto &edge1 = edges[0], &edge2 = edges[1];
    return (edge1[0] == edge2[0] || edge1[0] == edge2[1]) ? edge1[0] : edge1[1];
}