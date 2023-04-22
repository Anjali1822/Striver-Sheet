class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>mp(256,-1);
        int l=0,r=0,n=s.size();
        int maxi=0;
        while(r<n){
            if(mp[s[r]]!=-1)//if characeter is repeted move left
            {
                l=max(l,mp[s[r]]+1);
            }

            mp[s[r]]=r;
            maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};
