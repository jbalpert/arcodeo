/*
 * flipAndInvertImage.cpp
 * Arcodeo Solution
 * LeetCode Problem 832
 */
#include <algorithm>
#include "flipAndInvertImage.h"
using namespace std;
vector<vector<int>> flipAndInvertImage(vector<vector<int>> &image)
{
    for (auto &v : image)
    {
        reverse(v.begin(), v.end());
        for (int &i : v)
            i = !i;
    }
    return image;
}