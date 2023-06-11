
/*

follow the pick or not pick approach;

first pick an element
recursive call
then after returning remove the element
recursive call again



*/
#include <bits/stdc++.h> 
void getsubset(int idx,int n,vector<int> num,vector<int> &ans,int &sum){

    if(idx>=n){
        ans.push_back(sum);
        return;
    }
    sum+=num[idx];
    
    getsubset(idx+1,n,num,ans,sum);

    sum-=num[idx];

    getsubset(idx+1,n,num,ans,sum);


    
}
vector<int> subsetSum(vector<int> &num)
{
    // Write your code here.
    //if(num.size()==0 || num.size()==1)
      //  return num;
    vector<int> ans;
   // ans.push_back(0);
    int sum=0;

    getsubset(0,num.size(),num,ans,sum);
    
    sort(ans.begin(),ans.end());

    return ans;
}