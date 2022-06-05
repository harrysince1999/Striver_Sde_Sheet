#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
    int row= matrix.size();
    int col= matrix[0].size();
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(matrix[i][j]== 0)
            {
                for(int x = 0 ; x< col ;x++)
                {
                    if(matrix[i][x]!=0)
                     matrix[i][x] = -1;                   
                }
                
                for(int y= 0 ; y<row;y++)
                {
                    if(matrix[y][j]!=0)
                    matrix[y][j]=-1;                    
                }
            }
        }
    }
     for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(matrix[i][j]== -1)
            {
               matrix[i][j]=0;
            }
        }
    }
}
