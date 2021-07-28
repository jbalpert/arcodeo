/*
 * squareIsWhite.cpp
 * Arcodeo Solution
 * LeetCode Problem 1812
 */

#include "squareIsWhite.h"
using namespace std;

// bool squareIsWhite(string coordinates)
// {
//     return ((coordinates[0] - 'a') % 2 == (coordinates[1] % 2));
// }

bool squareIsWhite(string coordinates)
{
    return (coordinates[0] + coordinates[1]) % 2;
}