/*
    Problem Link: https://www.codingninjas.com/studio/problems/postorder-traversal_8230858?challengeSlug=striver-sde-challenge&leftPanelTab=0
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

void PostOrder(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }

    // left right root

    PostOrder(root->left, ans);
    PostOrder(root->right, ans);
    ans.push_back(root->data);
}

vector<int> getPostOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    PostOrder(root, ans);
    return ans;
}