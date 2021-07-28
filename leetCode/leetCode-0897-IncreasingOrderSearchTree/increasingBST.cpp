/*
 * increasingBST.cpp
 * Arcodeo Solution
 * LeetCode Problem 897
 */

#include "increasingBST.h"
using namespace std;

TreeNode *increasingBST(TreeNode *root)
{
    TreeNode *res = new TreeNode(0);
    TreeNode *copy = res;
    inOrder(res, root);
    return copy->right;
}

void inOrder(TreeNode *&res, TreeNode *root)
{
    if (!root)
        return;
    inOrder(res, root->left);
    res->right = new TreeNode(root->val);
    res = res->right;
    inOrder(res, root->right);
}

