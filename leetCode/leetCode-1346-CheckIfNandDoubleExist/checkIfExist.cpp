/*
 * checkIfExist.cpp
 * Arcodeo Solution
 * LeetCode Problem 1346
 */

#include "checkIfExist.h"
#include <unordered_set>
using namespace std;

bool checkIfExist(vector<int> &arr)
{
    unordered_set<double> set;
    for (int num : arr)
    {
        if (set.find((double)num) != set.end())
            return true;
        set.insert(num * 2);
        set.insert(num / 2.0);
    }
    return false;
}