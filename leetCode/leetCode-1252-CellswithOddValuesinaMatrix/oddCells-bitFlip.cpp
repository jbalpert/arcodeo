/*
 * oddCells.cpp
 * Arcodeo Solution
 * LeetCode Problem 1252
 */

#include "oddCells.h"
using namespace std;

int oddCells(int n, int m, vector<vector<int>> &indices, int res = 0)
{
    vector<bool> rMap(n), cMap(m);
    for (auto &idx : indices)
        rMap[idx[0]] = !rMap[idx[0]], cMap[idx[1]] = !cMap[idx[1]]; // on off switches
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            res += rMap[i] ^ cMap[j]; // XOR bools
    return res;
}