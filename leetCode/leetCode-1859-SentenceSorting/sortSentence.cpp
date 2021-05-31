/*
 * sortSentence.cpp
 * Arcodeo Solution
 * LeetCode Problem 1859
 */

#include <vector>
#include "sortSentence.h"
using namespace std;

string sortSentence(string s)
{
    vector<string> words(9);
    for (size_t i = 0; i < s.size(); ++i)
    {
        int j = i;
        string word;
        while (isalpha(s[j]))
        {
            word += s[j];
            ++j;
        }
        words[s[j] - '1'] = word;
        i = j + 1;
    }
    string res;
    for (string &w : words)
    {
        if (w != "")
            res += w + " ";
    }
    res.pop_back();
    return res;
}
