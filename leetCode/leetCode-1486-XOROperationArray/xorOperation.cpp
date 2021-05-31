/*
 * xorOperation.cpp
 * Arcodeo Solution
 * LeetCode Problem 1486
 */

#include "xorOperation.h"

int xorOperation(int n, int start) {
    int res = start;
    for(int i = 1; i < n; ++i){
        res ^= start + 2*i;
    }
    return res;
}
