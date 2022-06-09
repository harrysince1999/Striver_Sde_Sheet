#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
    pair<int,int> ans;
    int temp[n+1];
    
    for(int i=0;i<n+1;i++)
        temp[i] = 0;
    
    for(int i=0;i<n;i++)
    {
        temp[arr[i]]++;
    }
    for(int i=1;i<n+1;i++)
    {
        if(temp[i]== 2)
            ans.second = i;
        if(temp[i] == 0)
            ans.first = i;
    }
    return ans;
}

