/*
 * removeOuterParentheses.cpp
 * Arcodeo Solution
 * LeetCode Problem 1021
 */

#include "removeOuterParentheses.h"
using namespace std;
string removeOuterParentheses(string s)
{
    string res;
    int balance = 0;
    for (char c : s)
    {
        if (c == '(' && balance++ > 0)
            res += c;
        if (c == ')' && balance-- > 1)
            res += c;
    }
    return res;
}