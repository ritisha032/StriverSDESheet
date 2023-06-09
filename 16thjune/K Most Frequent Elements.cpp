#include <bits/stdc++.h> 
vector<int> KMostFrequent(int n, int k, vector<int> &arr)
{
    // Write your code here.
    vector<int> ans;
    unordered_map<int,int> freq;

    for(auto i:arr)
        freq[i]++;
    
    priority_queue<pair<int,int>> pq;

    for(auto i:freq){
        pq.push({i.second,i.first});
    }

    for(int i=1;i<=k;++i){
        ans.push_back(pq.top().second);
        pq.pop();
    }

    sort(ans.begin(),ans.end());

    return ans;
}