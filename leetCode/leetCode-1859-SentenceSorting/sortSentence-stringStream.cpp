/*
 * sortSentence.cpp
 * Arcodeo Solution
 * LeetCode Problem 1859
 */

#include <vector>
#include <sstream>
#include "sortSentence.h"
using namespace std;

string sortSentence(string s)
{
    vector<string> words(9);
    stringstream ss(s);
    string word;
    while (ss >> word)
        words[word.back() - '1'] = word.substr(0, word.length() - 1);
    string res;
    for (string &w : words)
        if (w != "")
            res += w + " ";
    res.pop_back();
    return res;
}
