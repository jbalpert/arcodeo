/*
 * maxProfit.cpp
 * Arcodeo Solution
 * LeetCode Problem 122
 */

#include "maxProfit.h"
using namespace std;
int maxProfit(vector<int>& prices) {
    int profit = 0;
    int buyPrice = 100000;
    for(const int &price : prices){
        if(price < buyPrice)
            buyPrice = price;
        else
            profit = max(profit, price - buyPrice);
    }
    return profit;
}