#include<bits/stdc++.h>
void helper(int idx,vector<int> &arr,int target,vector<int> &temp,
vector<vector<int>> &ans){

	if(target==0)
		{
			ans.push_back(temp);
			return;
		}

	for(int i=idx;i<arr.size();++i){
		if(i>idx && arr[i]==arr[i-1]) continue;
		if(arr[i]>target) break;

		temp.push_back(arr[i]);

		helper(i+1,arr,target-arr[i],temp,ans);

		temp.pop_back();
	}

	//helper(idx+1,arr,target,temp,ans);
}
vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	// Write your code here.
	vector<vector<int>> ans;

	vector<int> temp;

	sort(arr.begin(),arr.end());

	
	helper(0,arr,target,temp,ans);
	
	return ans;
}
