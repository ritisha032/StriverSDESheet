#include <bits/stdc++.h> 
int kthLargest(vector<int>& arr, int size, int K)
{
	// Write your code here.

	priority_queue<int> q;

	for(auto i:arr){
		q.push(i);
	}

	while(K>1){
		q.pop();
		--K;
	}

	return q.top();
}