#include <bits/stdc++.h> 
void solve(vector<int> v, vector<vector<int>> &ans,
vector<int> &temp,int idx){

    if(idx==v.size()){
        ans.push_back(temp);
        return;
    }

    temp.push_back(v[idx]);

    solve(v,ans,temp,idx+1);

    temp.pop_back();

    solve(v,ans,temp,idx+1);
}
vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    vector<vector<int>> ans;

    vector<int> temp;

    solve(v,ans,temp,0);

    return ans;
}