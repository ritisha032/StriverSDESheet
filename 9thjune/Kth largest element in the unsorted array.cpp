#include <bits/stdc++.h> 
int kthLargest(vector<int>& arr, int size, int K)
{
	// Write your code here.

	priority_queue<int> qp;

	for(auto i:arr)
		qp.push(i);

        while (K > 1) {
          qp.pop();
          --K;
        }

	return qp.top();
}