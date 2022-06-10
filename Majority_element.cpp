#include <bits/stdc++.h> 
int findMajorityElement(int arr[], int n) {
	int value= n/2;
    
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
    }
    for(auto it:m)
    {
        if(it.second > value)
            return it.first;
    }
    return -1;
}
