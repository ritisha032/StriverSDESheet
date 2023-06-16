#include <bits/stdc++.h> 
/*************************************************************

    Following is the Binary Tree node structure

    template <typename T>

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

        ~BinaryTreeNode() {
            if (left)
            {
                delete left;
            }
            if (right)
            {
                delete right;
            }
        }
    };

*************************************************************/
/*

inorder successor-minimum value in right subtree
inorder predecessor-maximum value in left subtree

*/
void helper(BinaryTreeNode<int> *root,int key,int &pre,int &suc){

    if(root==NULL)
        return;
    
    if(root->data == key){

            if(root->left!=NULL){
                BinaryTreeNode<int> *tmp=root->left;

                while(tmp->right){
                    tmp=tmp->right;
                }

                pre=tmp->data;
            }

            if(root->right!=NULL){
                BinaryTreeNode<int> *tmp=root->right;

                while(tmp->left){
                    tmp=tmp->left;
                }

                suc=tmp->data;
            }
            return;
    }

    if(root->data > key){
        suc=root->data;
        helper(root->left,key,pre,suc);
    }
    else{
        pre=root->data;
        helper(root->right,key,pre,suc);
    }
}
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    // Write your code here.
    int pre=-1,suc=-1;

    helper(root,key,pre,suc);

    pair<int,int> ans={pre,suc};

    return ans;
}
