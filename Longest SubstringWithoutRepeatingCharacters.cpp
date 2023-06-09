#include <bits/stdc++.h> 
int uniqueSubstrings(string input)
{
    //Write your code here
    int i=0,j=0,n=input.length();

    unordered_map<char,int> count;

    int ans=0;

    while(j<n){

        count[input[j]]++;

        if(j-i+1 == count.size())
            ans=max(ans,j-i+1);
        else if(j-i+1 > count.size()){

            while( j-i+1 > count.size() ){
                count[input[i]]--;

                if(count[input[i]]==0)
                    count.erase(input[i]);
                ++i;
            }
        }

        ++j;
    }

    return ans;
}