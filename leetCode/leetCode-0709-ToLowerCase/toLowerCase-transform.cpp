/*
 * toLowerCase-transform.cpp
 * Arcodeo Solution
 * LeetCode Problem 709
 */

#include "toLowerCase.h"
#include <algorithm>
#include <unordered_map>
using namespace std;

string toLowerCase(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}
