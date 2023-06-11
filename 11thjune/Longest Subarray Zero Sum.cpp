#include <bits/stdc++.h>

/* 

logic:- create a hashmap to store prefix sum
1) if sum==0 then ans maybe i+1
2) if sum already exists then a possible ans- current index - index of 
already existing sum

IMPORTANT- AFTER FINDING REPEATED SUM THE REASON WHY WE DONT UPDATE THE INDEX
IS BECAUSE WE WANT THE LONGEST SUBARRAY

*/
int LongestSubsetWithZeroSum(vector < int > arr) {

  // Write your code here

    int ans=0;

    unordered_map<int,int> prefix;

    int sum=0;

    for(int i=0;i<arr.size();++i){

        sum+=arr[i];

        

        if(sum==0)
          ans=max(ans,i+1);

        if(prefix.find(sum)!=prefix.end())
          ans=max(ans,i-prefix[sum]);
        else{
          prefix[sum]=i;
        }

      
        
    }

    return ans;

}