/*
 * MedianTwoSortedArrays-Naive.cpp
 * Arcodeo Solution
 * LeetCode Problem 4
 */

#include "MedianTwoSortedArrays.h"
using namespace std;

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    vector<int> naive(nums1.size() + nums2.size());
    auto n1 = nums1.begin(), n2 = nums2.begin();
    int i = 0;
    while (true)
    {
        if (n1 != nums1.end() && n2 != nums2.end())
        {
            naive[i++] = (*n1 < *n2) ? *n1++ : *n2++;
            continue;
        }
        while (n1 != nums1.end())
            naive[i++] = *n1++;
        while (n2 != nums2.end())
            naive[i++] = *n2++;
        if (n1 == nums1.end() && n2 == nums2.end())
            break;
    }
    if (naive.size() % 2 != 0)
        return (double)naive[naive.size() / 2];
    return (double)(naive[naive.size() / 2 - 1] + naive[naive.size() / 2]) / 2;
}