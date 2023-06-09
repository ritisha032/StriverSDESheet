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
void inorder(vector<int> &ans,TreeNode *root){
    if(!root)
        return;
   

        inorder(ans,root->left);
        
        inorder(ans,root->right);ans.push_back(root->data);

}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    // Write your code here.
    if(!root)
        return {};
    vector<int> ans;
    inorder(ans,root);
    return ans;
}