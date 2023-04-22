class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //TC - O(log(n*m))
        //sc=O(1) 
        if(!matrix.size())
          return false;

        int n=matrix.size();//row
        int m=matrix[0].size();//col

        int s=0,e=(n*m)-1;

        while(s<=e)
        {
            int mid=(s+(e-s)/2);

            if(target==matrix[mid/m][mid%m])// divide will correspond to row and % to col
            {
                return true;
            }
            else if(matrix[mid/m][mid%m]<target)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        return false;
    }
};
