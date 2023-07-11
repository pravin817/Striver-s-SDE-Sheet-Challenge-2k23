/*
    Problem Link: https://www.codingninjas.com/studio/problems/inorder-traversal_8230857?challengeSlug=striver-sde-challenge&leftPanelTab=0
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
void Inorder(TreeNode *root, vector<int> &ans)
{

    if (root == NULL)
    {
        return;
    }

    Inorder(root->left, ans);
    ans.push_back(root->data);
    Inorder(root->right, ans);
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> ans;
    Inorder(root, ans);
    return ans;
}