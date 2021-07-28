/*
 * removeElement.cpp
 * Arcodeo Solution
 * LeetCode Problem 27
 */

#include "removeElement.h"
#include <algorithm>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
    return nums.size();
}