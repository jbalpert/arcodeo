/*
 * diagonalSum-optimized.cpp
 * Arcodeo Solution
 * LeetCode Problem 1572
 */

#include "diagonalSum.h"
using namespace std;

int diagonalSum(vector<vector<int>> &mat)
{
    int answer = 0, i = 0, j = mat.size() - 1, n = mat.size();
    while (i < n)
    {
        answer += mat[i][i] + mat[i++][j--];
    }
    if (n % 2 != 0)
        answer = answer - mat[n / 2][n / 2];
    return answer;
}