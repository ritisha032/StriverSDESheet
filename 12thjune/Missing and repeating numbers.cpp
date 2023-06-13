#include <bits/stdc++.h>
/* logic- use hash map to store frequency
*/
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	unordered_map<int,int> check;

	pair<int,int> a;

	for(int i=1;i<=n;++i)
		check[i]=0;

	for(int i=0;i<arr.size();++i){

		if(check[arr[i]]==1)
			a.second=arr[i];
		check[arr[i]]++;
	}

	for(auto i:check){
		if(i.second==0)
		{	a.first=i.first;
			break;
		}
	}

	return a;
	
}
