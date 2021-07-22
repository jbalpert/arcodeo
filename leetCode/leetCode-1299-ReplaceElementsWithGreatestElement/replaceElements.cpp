/*
 * replaceElements.cpp
 * Arcodeo Solution
 * LeetCode Problem 1299
 */

#include "replaceElements.h"
using namespace std;
    vector<int> replaceElements(vector<int>& arr) {
       int currentMax = -1;
       for(int i = (int)arr.size() - 1; i >= 0; --i){
           int temp = arr[i];
           arr[i] = currentMax;
           currentMax = max(currentMax, temp);
       }
        return arr;
    }