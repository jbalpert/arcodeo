/*
 * RichestCustomerWealth.cpp
 * Arcodeo Solution
 * LeetCode Problem 1672
 */

#include "RichestCustomerWealth.h"
using namespace std;

int maximumWealth(vector<vector<int>> &accounts)
{
    int max = 0;
    for (vector<int> &customer : accounts)
    {
        int wealth = 0;
        for (int bank : customer)
        {
            wealth += bank;
        }
        if (max < wealth)
            max = wealth;
    }
    return max;
}
