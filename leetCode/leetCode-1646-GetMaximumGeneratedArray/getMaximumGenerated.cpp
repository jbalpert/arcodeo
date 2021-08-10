/*
 * getMaximumGenerated.cpp
 * Arcodeo Solution
 * LeetCode Problem 1646
 */

#include "getMaximumGenerated.h"
using namespace std;
    int getMaximumGenerated(int n) {
        if(n < 2)
            return n;
        vector<int> arr(n+1);
        int result = 0;
        arr[1] = 1;
        for(int i = 2; i <= n; ++i){
            arr[i] = (i % 2 == 0) ? arr[i/2] : arr[i/2] + arr[(i/2)+1];
            result = max(arr[i], result);
        }
        return result;
    }