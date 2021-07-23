/*
 * preorder.cpp
 * Arcodeo Solution
 * LeetCode Problem 589
 */

#include "preorder.h"
#include <stack>
using namespace std;

vector<int> preorder(Node *root)
{
    vector<int> res;
    if (!root)
        return res;
    stack<Node *> stack;
    stack.push(root);
    while (!stack.empty())
    {
        Node *curr = stack.top();
        res.push_back(curr->val);
        stack.pop();
        for (int i = curr->children.size() - 1; i >= 0; --i)
            stack.push(curr->children[i]);
    }
    return res;
}