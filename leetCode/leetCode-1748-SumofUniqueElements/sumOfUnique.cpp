/*
 * sumOfUnique.cpp
 * Arcodeo Solution
 * LeetCode Problem 1748
 */

#include "sumOfUnique.h"
#include <unordered_map>
using namespace std;
int sumOfUnique(vector<int> &nums)
{
    int sum = 0;
    unordered_map<int, int> map;
    for (auto num : nums)
        map[num]++;
    for (const auto &key : map)
        if (key.second == 1)
            sum += key.first;
    return sum;
}