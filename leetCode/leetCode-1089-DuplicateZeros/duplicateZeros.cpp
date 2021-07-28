/*
 * duplicateZeros.cpp
 * Arcodeo Solution
 * LeetCode Problem 1089
 */
#include "heightChecker.h"
using namespace std;
void duplicateZeros(vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == 0){
            arr.insert(arr.begin() + i + 1, 0);
            ++i;
            arr.pop_back();
        }
    }
}