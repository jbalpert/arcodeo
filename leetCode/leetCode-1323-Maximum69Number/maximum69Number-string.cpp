/*
 * maximum69Number-string.cpp
 * Arcodeo Solution
 * LeetCode Problem 1323
 */

#include "maximum69Number.h"
#include <string>
using namespace std;

int maximum69Number(int num)
{
    string strNum = to_string(num);
    for (char &character : strNum)
        if (character == '6')
        {
            character = '9';
            break;
        }
    return stoi(strNum);
}
