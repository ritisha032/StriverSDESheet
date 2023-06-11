#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
void solve(TreeNode<int> *root,int &ans,int x){

    if(!root)
        return;

    if(root->val == x)
        {
            ans=root->val;
            return;
        }
    
    else if( root->val > x)
        solve(root->left,ans,x);
    else{
        ans=root->val;
        solve(root->right,ans,x);
    }
}
int floorInBST(TreeNode<int> * root, int X)
{
    // Write your code here.
    int ans=-1;

    solve(root,ans,X);

    return ans;
}