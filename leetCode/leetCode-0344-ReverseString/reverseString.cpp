/*
 * reverseString.cpp
 * Arcodeo Solution
 * LeetCode Problem 344
 */

#include "reverseString.h"
#include <algorithm>
using namespace std;

void reverseString(vector<char> &s)
{
    int left = 0, right = s.size() - 1;
    while (left < right)
        swap(s[left++], s[right--]);
}