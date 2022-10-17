class Solution {
public:
    
//     int f(int ind,vector<int> &dp){
//         if(ind==0) return 1;
//         if(ind==1) return 1;
        
//         if(dp[ind]!=-1) return dp[ind];
//         int one=f(ind-1,dp);
//         int two=f(ind-2,dp);
        
//         return dp[ind]=one+two;
//     }
    
    int climbStairs(int n) {
        vector<int> dp(n+1,-1);
        // f(n,dp);
        dp[0]=1;dp[1]=1;
        for(int i=2;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};