/*
 * busyStudent.cpp
 * Arcodeo Solution
 * LeetCode Problem 1450
 */

#include "busyStudent.h"
using namespace std;

int busyStudent(vector<int> &startTime, vector<int> &endTime, int queryTime)
{
    int count = 0;
    for (size_t i = 0; i < startTime.size(); ++i)
    {
        if (queryTime >= startTime[i] && queryTime <= endTime[i])
            ++count;
    }
    return count;
}