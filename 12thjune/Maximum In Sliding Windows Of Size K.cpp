/* 
logic- use sliding window concept
while inserting an element in the list first remove
all elements smaller than it
when window size hits the front element will be the largest everytime 
*/
#include <bits/stdc++.h> 
vector<int> slidingWindowMaximum(vector<int> &nums, int &k)
{
    //    Write your code here.

    int i=0,j=0,n=nums.size();

    vector<int> ans;

    list<int> q;
    while(j<n){
        //before inserting a element remove all elements prior and smaller
        // to it
        while(!q.empty() && q.back()<nums[j])
            q.pop_back();
        q.push_back(nums[j]);
        if(j-i+1<k)
            ++j;
        else if(j-i+1==k){
            
            ans.push_back(q.front());

            if(q.front()==nums[i])
                q.pop_front();
            ++i;
            ++j;
        }
    }

    return ans;
}