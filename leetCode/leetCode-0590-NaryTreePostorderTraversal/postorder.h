/*
 * postorder.h
 * Arcodeo Solution
 * LeetCode Problem 590
 */
#ifndef POSTORDER_H
#define POSTORDER_H

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

std::vector<int> postorder(Node *root);
#endif