/*
 * RangeSumBST.h
 * Arcodeo Solution
 * LeetCode Problem 938
 */
#ifndef NUMSMALLERTHANCURR
#define NUMSMALLERTHANCURR

#include <vector>


struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};


int rangeSumBST(TreeNode* root, int low, int high);
#endif