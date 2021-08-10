/*
 * MinStack.h
 * Arcodeo Solution
 * LeetCode Problem 155
 */
#ifndef ROTATE_H
#define ROTATE_H
#include <stack>
#include <utility>

class MinStack
{
public:
    /** initialize your data structure here. */
    std::stack<std::pair<int, int>> s;
    MinStack()
    {
    }

    void push(int val)
    {
        if (s.empty())
            s.push({val, val});
        else
            s.push({val, (val < s.top().second) ? val : s.top().second});
    }

    void pop()
    {
        s.pop();
    }

    int top()
    {
        return s.top().first;
    }

    int getMin()
    {
        return s.top().second;
    }
};

#endif