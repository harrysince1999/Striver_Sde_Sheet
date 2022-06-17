#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) 
{
    vector<vector<int>> ans;
    set<vector<int>>s;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-2;i++)
    {
        int lo = i+1;
        int hi = n-1;
        while(lo<hi)
        {
            int curr = arr[i] + arr[lo] + arr[hi];
            if(curr == K)
            {
                s.insert({arr[i],arr[lo++],arr[hi--]});
            }
            else if(curr < K)
                lo++;
            else
                hi--;
        }
    }
    for(auto i: s)
        ans.push_back(i);
    return ans;
}
