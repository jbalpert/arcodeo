/*
 * diagonalSum-firstSolution.cpp
 * Arcodeo Solution
 * LeetCode Problem 1572
 */

#include "diagonalSum.h"
using namespace std;

int diagonalSum(vector<vector<int>> &mat)
{
    size_t leftDiag = 0, rightDiag = mat[0].size() - 1, count = 0;
    for (size_t i = 0; i < mat.size(); ++i)
    {
        if (leftDiag == rightDiag)
            count += mat[i][leftDiag];
        else
            count += mat[i][rightDiag] + mat[i][leftDiag];
        ++leftDiag;
        --rightDiag;
    }
    return count;
}