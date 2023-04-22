class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();  
        vector<vector<int>>res;

        if(nums.empty())
          return res;    //if nums is empty then return empty vector

        sort(nums.begin(),nums.end());//sort the vector

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                long long ans=(long long)target-(long long)nums[i]-(long long)nums[j];
                int front=j+1;
                int back=n-1;//2-sum property
                while(front<back){
                    int total=nums[front]+nums[back];
                    if(total <ans)
                       front++;
                    else if(total>ans){
                        back--;
                    }   
                    else//total==ans
                    {
                        vector<int>temp(4,0);
                        temp[0]=nums[i];
                        temp[1]=nums[j];
                        temp[2]=nums[front];
                        temp[3]=nums[back];
                        res.push_back(temp);

                        //jump over duplicates for front
                        while(front<back && nums[front]==temp[2]){
                          ++front;}

                        while(front<back && nums[back]==temp[3])
                           --back;   
                    }
                }
                while(j+1<n && nums[j+1]==nums[j])
                  ++j;
            }
            while(i+1<n && nums[i+1]==nums[i])
            ++i;
        }       
        return res; 
    }
};
