/*
 * pascals.cpp
 * Arcodeo Solution
 * LeetCode Problem 118
 */

#include "pascals.h"
using namespace std;
vector<vector<int>> pascals(int numRows)
{
    vector<vector<int>> res;
    res.reserve(numRows);
    // loop through rows 1 -> numRows
    for (int i = 1; i <= numRows; ++i)
    {
        // initialize row to be length i
        vector<int> row(i);
        // initialize first and last elm to 1
        row[0] = 1;
        row[i - 1] = 1;
        // loop to initialize inner loop
        for (int j = 1; j < i - 1; ++j)
            row[j] = res[i - 2][j - 1] + res[i - 2][j];
        res.push_back(row);
    }
    return res;
}