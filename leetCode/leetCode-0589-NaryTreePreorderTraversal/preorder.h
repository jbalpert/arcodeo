/*
 * preorder.h
 * Arcodeo Solution
 * LeetCode Problem 589
 */
#ifndef PREORDER_H
#define PREORDER_H

#include <vector>

class Node
{
public:
    int val;
    std::vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, std::vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

std::vector<int> preorder(Node *root);
#endif