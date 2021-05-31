/*
 * checkIfPangram-perfectHash.cpp
 * Arcodeo Solution
 * LeetCode Problem 1832
 */

#include "checkIfPangram.h"
#include <vector>
using namespace std;

bool checkIfPangram(string sentence)
{
    vector<bool> set(26);
    for (char character : sentence)
        set[character - 'a'] = true;
    for (bool character : set)
        if (!character)
            return false;
    return true;
}
