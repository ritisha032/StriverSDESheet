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
/*

Approach- Get 2d level order traversal
return maximum size of vector amongst it

*/
int getMaxWidth(TreeNode<int> *root)
{
    // Write your code here.
    if(!root)
        return 0;
    vector<vector<int>> ans;

    queue<TreeNode<int>*> q;
    q.push(root);

    while(!q.empty()){

        int n=q.size();

        vector<int> temp;

        for(int i=0;i<n;++i){
            TreeNode<int>* front=q.front();
            q.pop();
            temp.push_back(front->val);

            if(front->left)
                q.push(front->left);
            if(front->right)
                q.push(front->right);
        }

        ans.push_back(temp);
    }

    int h=ans[0].size();

    for(int i=1;i<ans.size();++i){

        int curr=ans[i].size();
        h=max(h,curr);
    }

    return h;

}