/*
 * DesignParkingSystem.cpp
 * Arcodeo Solution
 * LeetCode Problem 1603
 */

#include "DesignParkingSystem.h"
using namespace std;

ParkingSystem::ParkingSystem(int big, int medium, int small)
{
    b = big;
    m = medium;
    s = small;
}

bool ParkingSystem::addCar(int carType)
{
    switch (carType)
    {
    case 1:
        if (b > 0)
        {
            b--;
            return true;
        }
        break;
    case 2:
        if (m > 0)
        {
            m--;
            return true;
        }
        break;
    case 3:
        if (s > 0)
        {
            s--;
            return true;
        }
        break;
    }
    return false;
}
