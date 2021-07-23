/*
 * selfDividingNumbers.cpp
 * Arcodeo Solution
 * LeetCode Problem 728
 */

#include "selfDividingNumbers.h"
using namespace std;


vector<int> selfDividingNumbers(int left, int right)
{
    vector<int> res;
    for (int i = left; i < right + 1; ++i)
    {
        if (isSelfDividing(i))
            res.push_back(i);
    }
    return res;
}

bool isSelfDividing(int number)
{
    int numberCopy = number;
    if (number < 10)
        return true;
    while (numberCopy)
    {
        int remainder = numberCopy % 10;
        if (!remainder || number % remainder != 0)
            return false;
        numberCopy /= 10;
    }
    return true;
}

