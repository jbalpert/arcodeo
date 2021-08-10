/*
 * fizzBuzz.cpp
 * Arcodeo Solution
 * LeetCode Problem 412
 */
#include "fizzBuzz.h"
using namespace std;
    vector<string> fizzBuzz(int n) {
        vector<string> res(n, "");
        for(int i = 1; i <= n; ++i){
            if(i % 3 == 0)
                res[i-1] += "Fizz";
            if(i % 5 == 0)
                res[i-1] += "Buzz";
            if(res[i-1] == "")
                res[i-1] = to_string(i);
        }
        return res;
    }