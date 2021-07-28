/*
 * removeDuplicates.cpp
 * Arcodeo Solution
 * LeetCode Problem 26
 */

#include "removeDuplicates.h"
#include <algorithm>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    return nums.size();
}