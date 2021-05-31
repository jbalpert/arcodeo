/*
 * oddCells.cpp
 * Arcodeo Solution
 * LeetCode Problem 1252
 */

#include "oddCells.h"
using namespace std;

    int oddCells(int m, int n, vector<vector<int>>& indices) {
        vector<int> rMap(m); // maps row indices to count
        vector<int> cMap(n); // maps col indices to count
        int res = 0;
        for(size_t i = 0; i < indices.size(); ++i){
            ++rMap[indices[i][0]];
            ++cMap[indices[i][1]];
        }
        for(int i : rMap)
            for(int j : cMap){
                if((i+j) % 2)
                    ++res;
            }
        return res;
    }
