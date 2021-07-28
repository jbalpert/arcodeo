/*
 * validMountainArray.cpp
 * Arcodeo Solution
 * LeetCode Problem 941
 */
#include "validMountainArray.h"
using namespace std;
bool validMountainArray(vector<int> &arr)
{
    int i = 0;
    while (i + 1 < (int)arr.size() && arr[i] < arr[i + 1])
        ++i;
    if (i == 0 || i == arr.size() - 1)
        return false;
    while (i + 1 < (int)arr.size() && arr[i] > arr[i + 1])
        ++i;
    return i == arr.size() - 1;
}