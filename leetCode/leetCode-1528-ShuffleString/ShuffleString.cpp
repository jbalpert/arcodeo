/*
 * ShuffleString.cpp
 * Arcodeo Solution
 * LeetCode Problem 1528
 */

#include "ShuffleString.h"
using namespace std;

string restoreString(string s, vector<int> &indices)
{
    string result(s.size(), ' ');
    for (size_t i = 0; i < s.size(); ++i)
        result[indices[i]] = s[i];
    return result;
}
