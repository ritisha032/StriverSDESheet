#include <bits/stdc++.h> 
using namespace std;
/*************************************************************
 
    Following is the Binary Tree node structure

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/
int height(BinaryTreeNode<int> *root) {

    if(root==NULL)
        return 0;
    return 1+max(height(root->left),height(root->right));
}
bool isBalancedBT(BinaryTreeNode<int>* root) {
    // Write your code here.

    if(root==NULL || (!root->left && !root->right))
            return true;
    if(abs(height(root->left)-height(root->right))<=1)
        return isBalancedBT(root->left) && isBalancedBT(root->right);
   
    return false;

    
}