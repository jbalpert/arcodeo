/*
 * JewelsandStones.cpp
 * Arcodeo Solution
 * LeetCode Problem 771
 */

#include "JewelsandStones.h"
using namespace std;

int numJewelsInStones(const std::string &jewels, const std::string &stones)
{
    int count = 0;
    for (size_t i = 0; i < stones.size(); ++i)
    {
        if (jewels.find(stones[i]) != string::npos)
            ++count;
    }
    return count;
}
