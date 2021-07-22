/*
 * diStringMatch.cpp
 * Arcodeo Solution
 * LeetCode Problem 942
 */
#include "diStringMatch.h"
using namespace std;
vector<int> diStringMatch(string s)
{
    int l = 0, h = s.size();
    vector<int> res(s.size() + 1);
    for (size_t i = 0; i < s.size(); ++i)
        (s[i] == 'I') ? res[i] = l++ : res[i] = h--;
    res[s.size()] = h;
    return res;
}