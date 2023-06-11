#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
/*
approach- inorder traversal and keeping track of count of nodes visited
till count==k
*/
void solve(TreeNode<int> *root,int &ans,int &count,int k){

    if(!root)
        return;
    
    solve(root->left,ans,count,k);

    ++count;

    if(count==k)
    {
        ans=root->data;
    }

    solve(root->right,ans,count,k);
}
int kthSmallest(TreeNode<int> *root, int k)
{
	//	Write the code here.
    int count=0;

    int ans=-1;

    solve(root,ans,count,k);

    return ans;
}