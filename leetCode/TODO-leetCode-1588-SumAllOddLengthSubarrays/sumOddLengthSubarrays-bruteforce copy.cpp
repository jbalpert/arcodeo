/*
 * sumOddLengthSubarrays-bruteforce.cpp
 * Arcodeo Solution
 * LeetCode Problem 1588
 */

#include "sumOddLengthSubarrays.h"
using namespace std;

int sumOddLengthSubarrays(vector<int> &arr)
{
    // Example:
    //   12345
    // =========
    //  5: 12345
    //  3: 123
    //  3: 234
    //  3: 345
    //  1: 1
    //  1: 2
    //  1: 3
    //  1: 4
    //  1: 5

    // Length is 1
    // I is 0
    // 1 
    // I is 1
    // 2 
    // I is 2
    // 3 
    // I is 3
    // 4 
    // I is 4
    // 5 
    // Length is 3
    // I is 0
    // 1 2 3 
    // I is 1
    // 2 3 4 
    // I is 2
    // 3 4 5 
    // Length is 5
    // I is 0
    // 1 2 3 4 5 



    int count = 0;
    for (int len = 1; len <= arr.size(); len += 2)     // loop through odd lengths (for instance 1,3,5 if size is 5)
        for (int i = 0; i < arr.size() - len + 1; i++) // loop through all odd lengths that fit in arr
            for (int j = i; j < i + len; j++)          // loops through elements within those sections
                count += arr[j];
    return count;
}
