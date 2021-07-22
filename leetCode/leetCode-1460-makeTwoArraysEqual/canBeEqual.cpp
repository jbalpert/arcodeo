/*
 * canBeEqual.cpp
 * Arcodeo Solution
 * LeetCode Problem 1460
 */
#include <unordered_map>
#include "canBeEqual.h"
using namespace std;
bool canBeEqual(vector<int> &target, vector<int> &arr)
{
    unordered_map<int, int> map;
    for (size_t i = 0; i < target.size(); ++i)
    {
        map[target[i]]++;
        map[arr[i]]--;
    }
    for (const auto &pair : map)
        if (pair.second != 0)
            return false;
    return true;
}