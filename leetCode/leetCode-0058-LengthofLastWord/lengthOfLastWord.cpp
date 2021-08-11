/*
 * lengthOfLastWord.cpp
 * Arcodeo Solution
 * LeetCode Problem 58
 */

#include "lengthOfLastWord.h"
using namespace std;
int lengthOfLastWord(string s)
{
    int start = 0, end = s.size() - 1;
    while (end >= 0 && s[end--] == ' ')
        continue;

    for (start = end; start >= 0; --start)
    {
        if (s[start] == ' ')
            break;
    }
    return end - start + 1;
}