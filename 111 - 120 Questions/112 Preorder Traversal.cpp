/*
    Problem Link: https://www.codingninjas.com/studio/problems/preorder-traversal_8230856?challengeSlug=striver-sde-challenge&leftPanelTab=0
*/
#include <bits/stdc++.h>
/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data;
        TreeNode *left, *right;
        TreeNode() : data(0), left(NULL), right(NULL) {}
        TreeNode(int x) : data(x), left(NULL), right(NULL) {}
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
    };
*/

void PreOrder(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    // root left right

    ans.push_back(root->data);
    PreOrder(root->left, ans);
    PreOrder(root->right, ans);
}

vector<int> getPreOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    PreOrder(root, ans);
    return ans;
}