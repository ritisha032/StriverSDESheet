#include <bits/stdc++.h> 
/************************************************************

    Following is the BinaryTreeNode class structure

    template <typename T>
    class BinaryTreeNode {
       public:
        T val;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/
/*
logic:- use a queue 
push root in queue
pop front of queue
push its value to vector
check if left child of front and right child of front exists, if yes then push it
continue till queue becomes empty
*/
vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    //  Write your code here.
    if(!root)
        return {};
    vector<int> ans;


    queue<BinaryTreeNode<int>*> q;

    q.push(root);

    while(!q.empty()){

        BinaryTreeNode<int> *temp=q.front();
        ans.push_back(temp->val);
        q.pop();

        if(temp->left)
            q.push(temp->left);
        if(temp->right)
            q.push(temp->right);
        
    }


    return ans;
}