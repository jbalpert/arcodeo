/*
 * searchBST_OneLine.cpp
 * Arcodeo Solution
 * LeetCode Problem 700
 */

#include "searchBST.h"
using namespace std;

TreeNode *searchBST(TreeNode *root, int val)
{
    while (root)
    {
        if (root->val > val)
            root = root->left;
        else if (root->val < val)
            root = root->right;
        else
            return root;
    }
    return nullptr;
}