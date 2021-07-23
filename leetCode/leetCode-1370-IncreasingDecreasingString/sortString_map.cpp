/*
 * sortString_map.cpp
 * Arcodeo Solution
 * LeetCode Problem 1370
 */
#include "sortString.h"
#include <map>
using namespace std;
template <typename iter>
void appendCharacters(map<char, int> &map, string &res, iter begin, iter end)
{
    while (begin != end)
    {
        if (begin->second > 0)
        {
            res += begin->first;
            begin->second--;
        }
        ++begin;
    }
}

string sortString(string s)
{
    map<char, int> map;
    string res = "";
    for (char character : s)
        map[character]++;
    while (res.size() != s.size())
    {
        // Smallest to Largest
        appendCharacters(map, res, map.begin(), map.end());
        // Largest to Smallest
        appendCharacters(map, res, map.rbegin(), map.rend());
    }
    return res;
}