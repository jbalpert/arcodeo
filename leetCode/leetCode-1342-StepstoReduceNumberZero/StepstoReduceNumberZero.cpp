/*
 * StepstoReduceNumberZero.cpp
 * Arcodeo Solution
 * LeetCode Problem 1342
 */

#include "StepstoReduceNumberZero.h"

int numberOfSteps(int num)
{
    int count = 0;
    while (num != 0)
    {
        ++count;
        if (num % 2)
            --num;
        else
            num /= 2;
    }
    return count;
}
