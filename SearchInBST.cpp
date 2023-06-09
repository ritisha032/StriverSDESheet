#include <bits/stdc++.h> 
using namespace std;
/*
    Following is the Binary Tree node structure:

    class BinaryTreeNode {
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
*/

bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.

    if(!root)
        return false;
    if(x < root->data)
        return searchInBST(root->left,x);
    else if(x > root->data )
        return searchInBST(root->right,x);
    else
        return true;
}