/*
 * OrderedStream.h
 * Arcodeo Solution
 * LeetCode Problem 1656
 */
#ifndef ORDEREDSTREAM_H
#define ORDEREDSTREAM_H

#include <vector>
#include <string>

class OrderedStream
{
private:
    // Declare Private Member Variables Here
    int ptr = 0;
    std::vector<std::string> os;

public:
    OrderedStream(int n);
    vector<string> insert(int idKey, string value);
};

#endif