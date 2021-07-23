/*
 * freqAlphabets.cpp
 * Arcodeo Solution
 * LeetCode Problem 1309
 */
#include "freqAlphabets.h"
using namespace std;
string freqAlphabets(string s)
{
    string res = "";
    for (int i = (int)s.size() - 1; i >= 0; --i)
    {
        if (s[i] == '#')
        {
            int num = stoi(s.substr(i - 2, 2)) - 1;
            res = (char)(num + 'a') + res;
            i -= 2;
        }
        else
            res = (char)(s[i] - '0' + 96) + res;
    }
    return res;
}