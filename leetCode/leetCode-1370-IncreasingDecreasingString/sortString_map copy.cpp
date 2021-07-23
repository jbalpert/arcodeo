/*
 * sortString.cpp
 * Arcodeo Solution
 * LeetCode Problem 1370
 */
#include "sortString.h"
#include <vector>
using namespace std;

string sortString(string s)
{
    const int CHAR_COUNT = 26;
    vector<int> map(CHAR_COUNT);
    string res = "";
    for (char character : s)
        map[character - 'a']++;
    while (res.size() != s.size())
    {
        // Smallest to Largest
        for (size_t i = 0; i < CHAR_COUNT; ++i)
        {
            if (map[i] > 0)
            {
                res += i + 'a';
                map[i]--;
            }
        }
        // Largest to Smallest
        for (int i = CHAR_COUNT - 1; i >= 0; --i)
        {
            if (map[i] > 0)
            {
                res += i + 'a';
                map[i]--;
            }
        }
    }
    return res;
}