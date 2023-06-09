#include <bits/stdc++.h> 
bool areAnagram(string &str1, string &str2){
    // Write your code here.

    if(str1.length()!=str2.length())
        return false;
    vector<int> str1map(26);
    vector<int> str2map(26);

    for(int i=0;i<str1.length();++i){

        str1map[str1[i]-'a']++;
        str2map[str2[i]-'a']++;
    }

    return str1map==str2map;
}