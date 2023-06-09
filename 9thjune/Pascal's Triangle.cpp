#include <bits/stdc++.h>
using namespace std;

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> ans;

  for(int i=0;i<n;++i){

      vector<long long int> v;


      for(int k=0;k<=i;++k){

          if(k==0 || k==i )
             v.push_back(1);
          else{

            v.push_back(ans[i-1][k]+ans[i-1][k-1]);
          }
      }

      ans.push_back(v);
  }

  return ans;
}
