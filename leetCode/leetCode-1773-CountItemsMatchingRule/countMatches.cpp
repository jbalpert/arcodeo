/*
 * countMatches.cpp
 * Arcodeo Solution
 * LeetCode Problem 1773
 */

#include "countMatches.h"
using namespace std;

int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue)
{
    int idx = 0, count = 0;
    if (ruleKey[0] == 'c')
        idx = 1;
    else if (ruleKey[0] == 'n')
        idx = 2;
    for (auto &item : items)
        if (item[idx] == ruleValue)
            ++count;
    return count;
}
