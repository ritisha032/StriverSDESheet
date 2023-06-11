#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure:

    class BinaryTreeNode {
    public:
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;
        
        BinaryTreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
        
        ~BinaryTreeNode() {
            if (left) {
              delete left;
            }
            if (right) {
              delete right;
            }
        }
    };

************************************************************/

/*
    logic:- if node-> data== key then its the ceil
    if node-> data < key ans will lie in the right subtree since we
    need a greater value

    if node->data > key then its a potential ans and search in the 
    left subtree since we need the smallest greater integer

*/
void solve(BinaryTreeNode<int> *node,int &ans,int x){

    if(!node)
        return;
    
    if(node->data == x)
        {
            ans=node->data;
            return;
        }

    else if(node->data < x)
        solve(node->right,ans,x);
    else{
        ans=node->data;
        solve(node->left,ans,x);
    }
}
int findCeil(BinaryTreeNode<int> *node, int x){
    // Write your code here.

    int ans=-1;

    solve(node,ans,x);

    return ans;
}