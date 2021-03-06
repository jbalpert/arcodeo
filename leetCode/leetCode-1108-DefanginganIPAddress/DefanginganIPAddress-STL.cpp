/*
 * DefanginganIPAddress.cpp
 * Arcodeo Solution
 * LeetCode Problem 1108
 */

#include "DefanginganIPAddress.h"
using namespace std;

string defangIPaddr(string address)
{
    size_t start = 0;
    while ((start = address.find(".", start)) != string::npos)
    {
        address.replace(start, 1, "[.]");
        start += 3;
    }
    return address;
}