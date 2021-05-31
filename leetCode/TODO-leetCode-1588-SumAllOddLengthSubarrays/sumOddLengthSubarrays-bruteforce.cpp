/*
 * sumOddLengthSubarrays-bruteforce.cpp
 * Arcodeo Solution
 * LeetCode Problem 1588
 */

#include "sumOddLengthSubarrays.h"
using namespace std;

int sumOddLengthSubarrays(vector<int> &arr)
{
    int count = 0;
    for (int len = 1; len <= arr.size(); len += 2)     // loop through odd lengths
        for (int i = 0; i < arr.size() - len + 1; i++) //
            for (int j = i; j < i + len; j++)
                count += arr[j];
    return count;
}
