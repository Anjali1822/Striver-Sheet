class Solution {
public:
    vector<int> generaterow(int row)
    {
        vector<int>temp;
        temp.push_back(1);
        long long ans=1;
        for(int col=1;col<row;col++){
            ans=ans*(row-col);
            ans=ans/col;
            temp.push_back(ans);
        }
        return temp;
    }

    vector<vector<int>> generate(int n) {
        vector<vector<int>>ans;
        for(int i=1;i<=n;i++){
            ans.push_back(generaterow(i));
        }
        return ans;
    }
};
