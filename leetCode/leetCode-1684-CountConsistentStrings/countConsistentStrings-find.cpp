/*
 * countConsistentStrings.cpp
 * Arcodeo Solution
 * LeetCode Problem 1684
 */

#include "countConsistentStrings.h"
#include <algorithm>
#include <unordered_map>
using namespace std;

int countConsistentStrings(string allowed, vector<string> &words)
{
    int count = 0;
    for (string &word : words)
    {
        bool consistent = true;
        for (char character : word)
        {
            if (allowed.find(character) == string::npos)
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
