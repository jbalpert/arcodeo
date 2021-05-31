/*
 * removeOuterParentheses.cpp
 * Arcodeo Solution
 * LeetCode Problem 1021
 */

#include "removeOuterParentheses.h"
using namespace std;
string removeOuterParentheses(string s)
{
    int balance = 0;
    string res;
    for (char c : s)
    {
        if (c == '(')
        {
            if (balance++)
                res += '(';
        }
        else
        {
            if (--balance)
                res += ')';
        }
    }
    return res;
}
