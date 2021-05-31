/*
 * countConsistentStrings-bruteforce.cpp
 * Arcodeo Solution
 * LeetCode Problem 1684
 */

#include "countConsistentStrings.h"
using namespace std;

int countConsistentStrings(string allowed, vector<string> &words)
{
    vector<bool> set(26, false);
    int count = 0;
    for (char character : allowed)
        set[character - 'a'] = true;
    for (string &word : words)
    {
        bool consistent = true;
        for (char character : word)
        {
            if (!set[character - 'a'])
            {
                consistent = false;
                break;
            }
        }
        if (consistent)
            ++count;
    }
    return count;
}
