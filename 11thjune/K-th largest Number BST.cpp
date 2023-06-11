#include <bits/stdc++.h> 
/************************************************************
    Following is the Binary Search Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
/*
logic- do a reverse inorder traversal
keep track of count
when count==k return that node data
*/
void getkth(TreeNode<int>* root,int &count,int k,int &ans){

    if(!root || count>=k)
        return;

    getkth(root->right,count,k,ans);

    count++;
    if(count==k)
    {
        ans=root->data;
        return;
    }

    getkth(root->left,count,k,ans);
}
int KthLargestNumber(TreeNode<int>* root, int k) 
{
    // Write your code here.

    int ans=-1,count=0;

    getkth(root,count,k,ans);

    return ans;
}
