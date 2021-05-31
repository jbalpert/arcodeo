/*
 * maxDepth.cpp
 * Arcodeo Solution
 * LeetCode Problem 1614
 */

#include "maxDepth.h"
using namespace std;

int maxDepth(string s)
{
    int maxParen = 0, currentDepth = 0;
    for (char character : s)
    {
        if (character == '(')
            ++currentDepth;
        else if (character == ')')
            --currentDepth;
        if (maxParen < currentDepth)
            maxParen = currentDepth;
    }
    return maxParen;
}
