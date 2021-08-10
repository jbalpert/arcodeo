/*
 * isSymmetric.h
 * Arcodeo Solution
 * LeetCode Problem 101
 */
#ifndef ISSYMMETRIC_H
#define ISSYMMETRIC_H

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

bool isSymmetric(TreeNode *root);
#endif