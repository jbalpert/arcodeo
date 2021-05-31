/*
 * GoalParserInterpret.cpp
 * Arcodeo Solution
 * LeetCode Problem 1678
 */

#include "GoalParserInterpret.h"
using namespace std;

string interpret(string command)
{
    string res;
    for (size_t i = 0; i < command.size(); ++i)
    {
        if (command[i] == 'G')
            res += 'G';
        else if (command[i] == '(' && command[i + 1] == ')')
        {
            res += 'o';
            i += 1;
        }
        else
        {
            res += "al";
            i += 3;
        }
    }
    return res;
}