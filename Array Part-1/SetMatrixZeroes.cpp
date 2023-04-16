class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();///row
        int m=matrix[0].size();//col
        //int row[n]= {0} ->matrix[..][0]
        //int col[m]= {0} ->matrix[0][..]
        int col1=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==0)
                {
                    //mark ith row
                    matrix[i][0]=0;
                    
                    //mark the jth col
                    if(j!=0)
                       matrix[0][j]=0;
                    else
                       col1=0;
                }
            }
        }
        //Matrix without 1st row and 1st column
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(matrix[i][j]!=0)
                {
                    //checkfor col and row
                    if(matrix[i][0]==0 || matrix[0][j]==0)
                    {
                        matrix[i][j]=0;
                    }
                }
            }
        }
        //check 1st row
        if(matrix[0][0]==0)
        {
            for(int j=0;j<m;j++)
             matrix[0][j]=0;
        }
        if(col1==0){
            for(int i=0;i<n;i++)
            {
                matrix[i][0]=0;
            }
        }
        
    }
};
