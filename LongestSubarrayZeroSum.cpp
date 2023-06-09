#include <bits/stdc++.h>

int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here

  int sum=0,max_len=0;

  unordered_map<int,int> presum;

  for(int i=0;i<arr.size();++i){

      sum+=arr[i];

      if(sum==0)
        max_len=max(max_len,i+1);
      else if(presum.find(sum)!=presum.end()){
        max_len=max(max_len,i-presum[sum]);
      }
      else{
        presum[sum]=i;
      }
  }

  return max_len;

}