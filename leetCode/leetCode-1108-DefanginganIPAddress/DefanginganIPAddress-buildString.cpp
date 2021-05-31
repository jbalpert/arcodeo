/*
 * DefanginganIPAddress.cpp
 * Arcodeo Solution
 * LeetCode Problem 1108
 */

#include "DefanginganIPAddress.h"
using namespace std;

string defangIPaddr(string address)
{
    string res;
    for (char character : address)
        if (character == '.')
            res += "[.]";
        else
            res += character;
    return res;
}