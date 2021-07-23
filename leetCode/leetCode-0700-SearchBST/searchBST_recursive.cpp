/*
 * searchBST_recursive.cpp
 * Arcodeo Solution
 * LeetCode Problem 700
 */

#include "searchBST.h"
using namespace std;

TreeNode *searchBST(TreeNode *root, int val)
{
    if (!root)
        return nullptr;
    if (val == root->val)
        return root;
    return (root->val > val) ? searchBST(root->left, val) : searchBST(root->right, val);
}