#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.

	vector<int> check(n+1,0);

	for(int i=0;i<arr.size();++i){

		//if element already exists

		if(check[arr[i]]>0)
			return arr[i];

		check[arr[i]]++;
	}
}
