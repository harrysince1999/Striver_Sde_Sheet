#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    vector<int> arr;
    for(int i=0;i<n;i++)
        arr.push_back(permutation[i]);
    int idx = -1;
    for(int i=n-1; i>0; i--)
    {
        if(arr[i] > arr[i-1])
        {
            idx= i;
            break;
        }
    }
    if(idx == -1)
    {
        sort(arr.begin(),arr.end());
        return arr;
    }
    else
    {
            int prev = idx;
            for(int i= idx+1 ; i<n;i++)
            {
                if(arr[i]>arr[idx-1] && arr[i]<=arr[prev])
                    prev = i;
            }
            swap(arr[idx-1],arr[prev]);
            reverse(arr.begin()+idx,arr.end());
        return arr;
    }
}
