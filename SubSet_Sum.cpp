void solve(vector<int>&ans, vector<int>num, int index,vector<int>output)
{
    if(index >= num.size())
    {
        int sum=0;
        for(int i=0;i<output.size();i++)
            sum+= output[i];
        ans.push_back(sum);
        return;
    }
    
    // exclude
    solve(ans,num,index+1,output);
    
    // include
    output.push_back(num[index]);
    solve(ans,num,index+1,output);
}
vector<int> subsetSum(vector<int> &num)
{
    vector<int> ans;
    vector<int> output;
    solve(ans,num,0,output);
    sort(ans.begin(),ans.end());
    return ans;
}
