/*
 * countGoodTriplets.cpp
 * Arcodeo Solution
 * LeetCode Problem 1534
 */

#include <algorithm>
#include "countGoodTriplets.h"
using namespace std;

int countGoodTriplets(vector<int> &arr, int a, int b, int c)
{
    int count = 0;
    for (size_t i = 0; i < arr.size() - 2; ++i)
        for (size_t j = i + 1; j < arr.size() - 1; ++j)
            if (abs(arr[i] - arr[j]) <= a)
                for (size_t k = j + 1; k < arr.size(); ++k)
                    if (abs(arr[j] - arr[k]) <= b && abs(arr[i] - arr[k]) <= c)
                        ++count;
    return count;
}