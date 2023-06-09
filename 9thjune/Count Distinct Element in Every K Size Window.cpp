#include <bits/stdc++.h> 
vector<int> countDistinctElements(vector<int> &arr, int k) 
{
    // Write your code here

    int i=0,j=0,n=arr.size();

    unordered_map<int,int> count;

    vector<int> ans;

    while(j<n){

        count[arr[j]]++;

        if(j-i+1<k)
            ++j;
        else if(j-i+1==k){
            ans.push_back(count.size());

            count[arr[i]]--;

            if(count[arr[i]]==0)
                count.erase(arr[i]);

            ++i;
            ++j;
        }

    
    }

    return ans;
	
}
