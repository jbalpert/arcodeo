/*
 * OrderedStream.cpp
 * Arcodeo Solution
 * LeetCode Problem 1656
 */

#include "OrderedStream.h"
using namespace std;

OrderedStream::OrderedStream(int n) : os{(size_t)n} {}

vector<string> OrderedStream::insert(int idKey, string value)
{
    os[idKey - 1] = value;
    vector<string> res;
    while (ptr < os.size() && os[ptr] != "")
        res.push_back(os[ptr++]);
    return res;
}
