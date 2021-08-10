/*
 * fib_recursiveDP.cpp (topdown)
 * Arcodeo Solution
 * LeetCode Problem 509
 */

#include "fib.h"
#include <vector>
using namespace std;

int fib(int n) {
    if (n <= 1)
        return n;
    vector<int> memo(n + 1, -1);
    memo[0]=0;
    memo[1]=1;
    
    return fib_memo(n,memo);
}

int fib_memo(int n, vector<int> &memo){
    if(memo[n] != -1)
        return memo[n];
    else{
        memo[n]=fib_memo(n - 1, memo) + fib_memo(n - 2, memo);
        return memo[n];
    }
}