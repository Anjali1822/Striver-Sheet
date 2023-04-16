class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int miniprice=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            miniprice=min(miniprice,prices[i]);
            maxprofit=max(maxprofit,prices[i]-miniprice);
        }
        return maxprofit;
    }
};
