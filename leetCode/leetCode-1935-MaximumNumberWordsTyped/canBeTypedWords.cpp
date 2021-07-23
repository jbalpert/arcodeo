/*
 * canBeTypedWords.cpp
 * Arcodeo Solution
 * LeetCode Problem 1935
 */

#include "canBeTypedWords.h"
#include <vector>
using namespace std;

int canBeTypedWords(string text, string brokenLetters)
{
    int count = 0;
    bool broken = false;
    vector<bool> set(26, false);
    for (char character : brokenLetters)
        set[character - 'a'] = true;
    for (size_t i = 0; i < text.size(); ++i)
    {
        broken = false;
        while (i < text.size() && text[i] != ' ')
        {
            if (set[text[i++] - 'a'])
                broken = true;
        }
        if (!broken)
            ++count;
    }
    return count;
}