/*
 * isSymmetric_recursive.cpp
 * Arcodeo Solution
 * LeetCode Problem 101
 */

#include "isSymmetric.h"
using namespace std;

bool isEqual(TreeNode *leftSub, TreeNode *rightSub)
{
    if (!leftSub && !rightSub)
        return true;
    if (leftSub && rightSub)
        return leftSub->val == rightSub->val && isEqual(leftSub->right, rightSub->left) && isEqual(leftSub->left, rightSub->right);
    return false;
}

bool isSymmetric(TreeNode *root)
{
    return root == nullptr || isEqual(root->left, root->right);
}