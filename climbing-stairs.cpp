class Solution {
public:
    int climbStairs(int n){
        int dp[n+1];
        memset(dp, -1, sizeof(dp));
        int ans = climb(n, dp);
        return ans;
    }
    
    int climb(int n, int dp[]) {
        if(n==0 || n==1){
            dp[n] = 1;
            return dp[n];
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        else{
            dp[n] = climb(n-1, dp)+climb(n-2, dp);
            return dp[n];
        }
    }
};
