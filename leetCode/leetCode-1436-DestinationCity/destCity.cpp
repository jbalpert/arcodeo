/*
 * destCity.cpp
 * Arcodeo Solution
 * LeetCode Problem 1436
 */

#include "destCity.h"
#include <unordered_map>
#include <cassert>
using namespace std;

string destCity(vector<vector<string>> &paths)
{
    unordered_map<string, string> map;
    for (const auto &path : paths)
        map[path[0]] = path[1];
    for (auto it : map)
        if (map.find(it.second) == map.end())
            return it.second;
    assert(false);
}