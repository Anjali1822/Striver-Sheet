#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int x)
{
    unordered_map<int,int>f;
    int cnt=0;
    int xorr=0;
    
    for(auto it:arr){
        xorr=xorr^it;
        if(xorr==x){
            cnt++;
        }
        
        if(f.find(xorr^x)!=f.end()){
            cnt+=f[xorr^x];
        }

        f[xorr]+=1;
    }
    return cnt;
}
