/*
 * checkIfPangram.cpp
 * Arcodeo Solution
 * LeetCode Problem 1832
 */

#include "checkIfPangram.h"
#include <unordered_set>
using namespace std;

bool checkIfPangram(string sentence) {
    unordered_set<char> set;
    for(char character : sentence)
        if(set.find(character) == set.end()) set.insert(character);
    return set.size() == 26;
}
