/*
 * LongSubstrNoRepeatChars-PerfectHash.cpp
 * Arcodeo Algorithm
 */

#include <string>
#include <vector>
using namespace std;

int lengthOfLongestSubstring(string s)
{
    vector<int> map(256, -1); // declare perfect hash of characters to locations
    int maxLen = 0, start = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (map[s[i]] > start)
            start = map[s[i]];
        map[s[i]] = i;
        maxLen = max(maxLen, i - start);
    }
    return maxLen;
}
