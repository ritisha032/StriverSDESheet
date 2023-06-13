/*
logic:- variable sized sliding window

increase window size till window size == map size

when window size greater remove till window size == map size
*/
#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    int ans=0;

    int i=0,j=0,n=input.length();

    unordered_map<int,int> check;

    while(j<n){
        
        check[input[j]]++;

        if(j-i+1==check.size()){
            int n=check.size();
            ans=max(ans,n);
        }

        else if(j-i+1 > check.size()){

            while(j-i+1 > check.size()){

                check[input[i]]--;

                if(check[input[i]]==0)
                    check.erase(input[i]);
                ++i;
            }
            int n=check.size();
            ans=max(ans,n);
            
        }
        ++j;
    }

    return ans;
}