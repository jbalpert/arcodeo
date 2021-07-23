/*
 * judgeCircle.cpp
 * Arcodeo Solution
 * LeetCode Problem 657
 */

#include "judgeCircle.h"
using namespace std;

bool judgeCircle(string moves)
{
    int dx = 0, dy = 0;
    for (char move : moves)
    {
        switch (move)
        {
        case 'U':
            --dy;
            break;
        case 'D':
            ++dy;
            break;
        case 'L':
            --dx;
            break;
        case 'R':
            ++dx;
            break;
        }
    }
    return dx == 0 && dy == 0;
}
