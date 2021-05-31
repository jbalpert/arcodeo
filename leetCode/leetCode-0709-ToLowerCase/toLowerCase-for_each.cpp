/*
 * toLowerCase-for_each.cpp
 * Arcodeo Solution
 * LeetCode Problem 709
 */

#include "toLowerCase.h"
#include <algorithm>
#include <unordered_map>
using namespace std;

string toLowerCase(string s)
{
    for_each(s.begin(), s.end(), [](char &c)
             { c = tolower(c); });
    return s;
}

