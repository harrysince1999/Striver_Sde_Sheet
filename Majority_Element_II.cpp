#include <bits/stdc++.h> 
vector<int> majorityElementII(vector<int> &arr)
{
            int size = arr.size();
        int val= size/3;
    vector<int> ans;
       unordered_map<int,int> m;

       for(int i=0;i<size;i++)
       {
           m[arr[i]]++;
       }
       for(auto it:m)
       {
           if(it.second > val)
           {
                ans.push_back(it.first);
           }
       }
    return ans;

}
