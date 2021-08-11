/*
 * firstUniqChar.cpp
 * Arcodeo Solution
 * LeetCode Problem 387
 */

#include "firstUniqChar.h"
#include <unordered_map>
using namespace std;
    int firstUniqChar(string s) {
        int res = 0;
        unordered_map<char,int> characters;
        for(char c : s)
            characters[c]++;
        for(char c : s){
            if(characters[c] == 1) return res;
            res++;
        }
        return -1;
    }