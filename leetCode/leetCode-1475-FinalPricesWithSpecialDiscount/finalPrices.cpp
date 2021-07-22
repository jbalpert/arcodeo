/*
 * finalPrices.cpp
 * Arcodeo Solution
 * LeetCode Problem 1475
 */

#include "finalPrices.h"
using namespace std;
vector<int> finalPrices(vector<int> &prices)
{
    vector<int> stack;
    for (int i = (int)prices.size() - 1; i >= 0; --i)
    {
        int curr = prices[i];
        while (!stack.empty() && stack.back() > curr)
            stack.pop_back();
        if (!stack.empty())
            prices[i] -= stack.back();
        stack.push_back(curr);
    }
    return prices;
}