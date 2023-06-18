#include <bits/stdc++.h> 
void permute(string s,int l,int r,vector<string> &ans){

    if(l==r)
        {
            ans.push_back(s);
            return;
        }

        for(int i=l;i<=r;++i){
            swap(s[l],s[i]);

            permute(s,l+1,r,ans);

            swap(s[l],s[i]);
        }
}
vector<string> findPermutations(string &s) {
    // Write your code here.
    vector<string> ans;

    

    permute(s,0,s.length()-1,ans);

    return ans;
}