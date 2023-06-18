#include <bits/stdc++.h> 
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

vector<int> zigZagTraversal(BinaryTreeNode<int> *root)
{
    // Write your code here!
    vector<int> ans;

    if(root==NULL)
        return {};

   

    queue<BinaryTreeNode<int>*> q;

    q.push(root);

    int level=1;

    while(!q.empty()){

        vector<int> a;

        int n=q.size();

        for(int i=0;i<n;++i){
            BinaryTreeNode<int> *t=q.front();
            q.pop();
            a.push_back(t->data);

            if(t->left)
                q.push(t->left);
            if(t->right)
                q.push(t->right);
        }

        if(level&1)
           {
               for(int j=0;j<a.size();++j){
                   ans.push_back(a[j]);
               }
           }
        else{

            for(int j=a.size()-1;j>=0;--j){
                ans.push_back(a[j]);
            }
            
        }

        ++level;
    }

    return ans;
}
