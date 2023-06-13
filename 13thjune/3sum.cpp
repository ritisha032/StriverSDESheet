/*

Approach- For each element using two sum for the remaining target
*/
#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.

	sort(arr.begin(),arr.end());

	vector<vector<int>> ans;

	if(n<3)
		return {};

	for(int i=0;i<n-2;++i){

		if( (i==0) || (i>0 && arr[i]!=arr[i-1])){

			int low=i+1,high=n-1,target=K-arr[i];

			while(low<high){

				if(arr[low]+arr[high]>target)
					--high;
				else if(arr[low]+arr[high]<target)
					++low;
				else{
					ans.push_back({arr[i],arr[low],arr[high]});

					while(low<high && arr[low]==arr[low+1]) ++low;
					while(low<high && arr[high]==arr[high-1])--high;

					++low;
					--high;
				}
			}
		}
	}

	return ans;

}