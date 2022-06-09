#include <bits/stdc++.h> 
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> ans;
    sort(intervals.begin(),intervals.end());
    vector<int> temp = intervals[0];
    
    for(int i=0; i<intervals.size();i++)
    {
         if(intervals[i][0] <= temp[1])
         {
             temp[1]= max(intervals[i][1],temp[1]);
         }
        else
        {
            ans.push_back(temp);
            temp=intervals[i];
        }
    }
    
    ans.push_back(temp);
    return ans;
}

