void solve(vector<vector<int>> &ans, vector<int>arr, vector<int>output, int index, int n, int k)
{
    if(index== n)
    {
        int sum=0;
        for(int i=0;i<output.size();i++)
            sum+= output[i];
        if(sum == k)
            ans.push_back(output);
        return;
    }
    solve(ans,arr,output,index+1,n,k);
    output.push_back(arr[index]);
    solve(ans,arr,output,index+1,n,k);
}
vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int n, int k)
{
    vector<vector<int>> ans;
    vector<int>output;
    solve(ans,arr,output,0,n,k);
    return ans;
}
