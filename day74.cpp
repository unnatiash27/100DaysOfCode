//Given an integer n, return the number of people who know the secret at the end of day n. Since the answer may be very large, return it modulo 109 + 7.

class Solution {
public:
    int mod=1e9+7;
    int peopleAwareOfSecret(int n, int delay, int forget) {
       vector<int> curr(2001,0);
       curr[1]=1;
       for(int i=1;i<=n;i++)
       {
           for(int j=i+delay;j<i+forget;j++)
           {
               curr[j]=(curr[j]+curr[i])%mod;
           }

       }
        long long  ans=0;
        for(int i=n;i>n-forget;i--)
        {
            ans=(ans+curr[i])%mod;
        }
        return ans;
    }
};
