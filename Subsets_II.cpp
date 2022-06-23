#include <bits/stdc++.h>
void solve(set < vector < int >> &res,vector<int> arr, vector<int> output,int index)
{
    
    if(index == arr.size())
    {
        sort(output.begin(),output.end());
        res.insert(output);
        return;
    }
    
    solve(res,arr,output,index+1);
    
    output.push_back(arr[index]);
    solve(res,arr,output,index+1);
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    vector<vector<int>> ans;
    vector<int>output;
    set < vector < int >> res;
    solve(res,arr,output,0);

    for (auto it = res.begin(); it != res.end(); it++)
      ans.push_back( * it);
  
    return ans;
}
