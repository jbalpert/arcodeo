/*
 * postorder.cpp
 * Arcodeo Solution
 * LeetCode Problem 590
 */

#include "postorder.h"
#include <stack>
#include <algorithm>
using namespace std;

vector<int> postorder(Node *root)
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
        for (auto &child : curr->children)
            stack.push(child);
    }
    reverse(res.begin(), res.end());
    return res;
}