/*
 * isSubsequence.cpp
 * Arcodeo Solution
 * LeetCode Problem 392
 */

#include "isSubsequence.h"
using namespace std;
    bool isSubsequence(string s, string t) {
        int index = 0;
        for(char character : t)
            if(character == s[index])
                index++;
        return index == s.size();
    }